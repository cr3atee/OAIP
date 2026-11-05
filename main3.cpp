#include <iostream>

using namespace std;

int main() {
    int m, n, k;
    cin >> m >> n >> k;
    if (m * n >= k and (k % m == 0 or k % n == 0)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}