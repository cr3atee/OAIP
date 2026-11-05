#include <iostream>

using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 0 and b == 0) {
        if (c == 0 and d == 0) {
            cout << "NO";
        }
        else {
            cout << "INF";
        }
    }
    else if (a == 0) {
        cout << "NO";
    }
    else if (a * d - b * c == 0) {
        cout << "NO";
    }
    else {
        cout << -b / a;
    }
}
