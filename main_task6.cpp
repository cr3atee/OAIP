#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x < -3){
        cout << x;
    }
    else if (x < -1){
        cout << 2*x - 1;
    }
    else if (x < -5){
        cout << x*x - 2;
    } 
    else{
        cout << 1;
    }
}