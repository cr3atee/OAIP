#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x * y * z <= 158) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }   
}