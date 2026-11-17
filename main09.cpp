#include <iostream>
using namespace std;

int main() {
    int x, max1 =0, max2 = 0;
    cin >> x;

    while (x != 0) {
        if (x > max1) {
            max2 = max1;
            max1 = x;
        } else if (x > max2) {
            max2 = x;
        }
        cin >> x;
    }

    cout << max2;
}