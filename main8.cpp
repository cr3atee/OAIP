#include <iostream>
#include <utility>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b) {
        swap(a, b);
    }
    if (b < c) {
        swap(b, c);
    }
    if (a < b) {
        swap(a, b);
    }
    if (a <= 55 and b <= 40 and c <= 25) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}