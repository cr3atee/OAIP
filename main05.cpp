#include <iostream>
using namespace std;

int main() {
    const size_t max_size = 100;
    int a[max_size];
    size_t n;
    cin >> n;
    for (size_t i=0; i < n; i++) cin >> a[i];
    bool found = false;
    for (size_t i = n; i--; ) {
        if (a[i] % 2 == 0) {
            cout << i;
            found = true;
            break;
        }
    }
    if (!found) cout << -1;
}       