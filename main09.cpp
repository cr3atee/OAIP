#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned x, k;
    unsigned res;
    cin >> x >> k;
    res = (x >> k) & 1;
    cout << res;
}  