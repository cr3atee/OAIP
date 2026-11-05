#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    if (x > 85){
        cout << 5;
    }
    else if (x > 75){
        cout << 4;
    }
    else if (x > 60) {
        cout << 3;
    }
    else{
        cout << 2;
    }
}