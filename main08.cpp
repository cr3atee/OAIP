#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if ((x >= 0 and x <= 23) and (y >= 0) and (y <= 60)){
        cout << "da";
    }
    else
        cout << "net";
}