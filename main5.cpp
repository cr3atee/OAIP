#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;
    if (x < 1000){
        cout << "N";
    }
    else if (x < 5000){
        cout << "L";
    }
    else if (x < 15000){
        cout << "M";
    }
    else{
        cout << "E";
    }
}