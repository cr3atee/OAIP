#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, p = 3.141592653;
    cin >> x;
    do {
        x *= p / 180;
        y = sin(x);
        cout << y;
    } while (0);
}