#include <iostream>
using namespace std;

int main() {
    const size_t n = 10;
    double a[n] {3.1, 2.4, -1.5, 5, 0.3, 7.2, -6.1, 10.2, -4.5, -5.2};
    for (size_t i=1; i < n; i+=2){
        cout << a[i] << " ";
    }
}    