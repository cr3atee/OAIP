#include <iostream>
using namespace std;

int main()
{
    double sum = 0.0;
    for (double x = 1; x <= 97; x += 3){
        double y = x + 1;
        sum += (x/y);
    }
    cout << sum;
}
