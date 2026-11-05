#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x == y and y == z) {
        cout << 3;
    }
    else if (x == y or x == z or y == z) {
        cout << 2;
    }
    else {
        cout << 0;
    }   
}