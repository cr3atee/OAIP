#include <iostream>
#include <utility>
using namespace std;

int main() {
    const size_t max_size = 100;
    double a[max_size];
    size_t n, min_ind = 0;
    cin >> n;
    for (size_t i=0; i < n; i++) cin >> a[i];
    for (size_t i=1; i < n; i++)
        if (a[i] < a[min_ind]) min_ind = i;
    swap(a[min_ind], a[0]);
    for (size_t i=0; i < n; i++) cout << a[i] << " ";

}       