#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;
    if ((2*x*x - 5*x + 1) != 0){
        cout << (3*x*x - 5*x + 1) / (2*x*x - 5*x + 1);
    }
}