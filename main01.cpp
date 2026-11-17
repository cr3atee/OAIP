#include <iostream>
using namespace std;

int main() {
    int n, k=0;
    cin >> n;
    for (int i = 1; i <= n; i+=1 ){
        k = k * 10 + i;
        cout << k << "\n";
    }   
}
