param(
    [Parameter(Mandatory = $true)]
    [string]$Source
)

Set-StrictMode -Version Latest
$ErrorActionPreference = 'Stop'

if (-not (Test-Path -LiteralPath $Source -PathType Leaf))
{
    throw "Iskhodny fail ne naiden: $Source"
}

if ([System.IO.Path]::GetExtension($Source) -notin @('.cpp', '.cc', '.cxx'))
{
    throw "Aktivnyi fail ne yavlyaetsya C++ iskhodnikom: $Source"
}

$cl = Get-Command cl.exe -ErrorAction SilentlyContinue

if ($null -eq $cl)
{
    $vswhere = Join-Path ${env:ProgramFiles(x86)} 'Microsoft Visual Studio\Installer\vswhere.exe'

    if (-not (Test-Path -LiteralPath $vswhere -PathType Leaf))
    {
        throw 'MSVC ne naiden. Ustanovite Visual Studio Build Tools s komponentom "Desktop development with C++".'
    }

    $installationPath = & $vswhere `
        -latest `
        -products '*' `
        -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 `
        -property installationPath

    if ($LASTEXITCODE -ne 0 -or [string]::IsNullOrWhiteSpace($installationPath))
    {
        throw 'MSVC ne naiden. Otkroite Visual Studio Installer i ustanovite "Desktop development with C++".'
    }

    $devShell = Join-Path $installationPath 'Common7\Tools\VsDevCmd.bat'
    if (-not (Test-Path -LiteralPath $devShell -PathType Leaf))
    {
        throw "Ne naiden skript nastroiki MSVC: $devShell"
    }

    $environmentLines = & $env:ComSpec /d /s /c "`"$devShell`" -no_logo -arch=x64 -host_arch=x64 && set"
    if ($LASTEXITCODE -ne 0)
    {
        throw 'Ne udalos nastroit sredu MSVC.'
    }

    foreach ($line in $environmentLines)
    {
        $separator = $line.IndexOf('=')
        if ($separator -gt 0)
        {
            $name = $line.Substring(0, $separator)
            $value = $line.Substring($separator + 1)
            Set-Item -LiteralPath "Env:$name" -Value $value
        }
    }

    $cl = Get-Command cl.exe -ErrorAction SilentlyContinue
    if ($null -eq $cl)
    {
        throw 'Sreda MSVC nastroena, no cl.exe ne naiden.'
    }
}

$sourceItem = Get-Item -LiteralPath $Source
$outputBase = Join-Path $sourceItem.DirectoryName $sourceItem.BaseName
$compilerArguments = @(
    '/nologo',
    '/std:c++20',
    '/EHsc',
    '/W4',
    '/permissive-',
    '/Zi',
    '/Od',
    '/utf-8',
    $sourceItem.FullName,
    "/Fe:$outputBase.exe",
    "/Fo:$outputBase.obj",
    "/Fd:$outputBase.pdb",
    '/link',
    '/DEBUG'
)

& $cl.Source @compilerArguments
if ($LASTEXITCODE -ne 0)
{
    exit $LASTEXITCODE
}
