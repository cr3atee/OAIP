#include <cmath>
#include <iomanip>
#include <iostream>

int main()
{
    double weight{};
    double height{};

    std::cout << "Vvedite vash ves v kilogrammah: ";
    if (!(std::cin >> weight) || !std::isfinite(weight) || weight <= 0.0)
    {
        std::cerr << "Oshibka: ves dolzhen byt polozhitelnym chislom.\n";
        return 1;
    }

    std::cout << "Vvedite vash rost v metrah (naprimer, 1.75): ";
    if (!(std::cin >> height) || !std::isfinite(height) || height <= 0.0)
    {
        std::cerr << "Oshibka: rost dolzhen byt polozhitelnym chislom.\n";
        return 1;
    }

    const double bmi = weight / (height * height);
    std::cout << "Vash IMT: " << std::fixed << std::setprecision(2) << bmi << '\n';

    return 0;
}
