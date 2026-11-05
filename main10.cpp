#include <iostream>
using namespace std;

int main() {
    int v, t, s;
    cin >> v >> t;
    s = (v * t) % 400;
    if (s > 200) {
        cout << 400 - s;
    }
    else {
        cout << s;
    }
}
