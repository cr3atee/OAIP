#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    if (x > y){
        cout << x << " " << y;
    }
    else if(x < y){
        cout << y << " " << x;
    }
    else
        cout << x;
}