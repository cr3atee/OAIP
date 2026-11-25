#include <iostream>
using namespace std;

int main() {
    const size_t n = 10;
    double a[n] {3.1, 2.4, -1.5, 5, 0.3, 7.2, -6.1, 10.2, -4.5, -5.2};
    double s = 0.0;
    for (size_t i=0; i < n; ++i){
        if (a[i] > 5) s += a[i];
    }
    cout << s;
}    