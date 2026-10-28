#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    if (a == 0){
        cout << b << " = 0";
}
     else{
        if (a == 1) {
            cout << "x";
    }
        else if (a == -1){
            cout << "-x";
    }
        else {
            cout << a << "x"; 
    }
        if (b > 0){
            cout << " + " << b << " = 0";
    }
        else if (b < 0){
            cout << " - " << abs(b) << " = 0";
        }
        else {
            cout << " = 0";
        }
    }
}