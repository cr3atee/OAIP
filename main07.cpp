#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;
    if ((x >= 5000) and (x < 10000)){
        x *= 0.9;
    }
    else if (x >= 10000){
         x *= 0.85;
    }
    cout << x;
}