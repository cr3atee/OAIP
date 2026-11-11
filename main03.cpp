#include <iostream>
using namespace std;

int main()
{
    int x, y, res = 0;
    cin >> x >> y;
    for(int i = 0; i < y; i++) res+=x;
    cout << res;
}
