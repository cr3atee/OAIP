#include <iostream>
using namespace std;

int main() {
    int n, k=0;
    cin >> n;
    for (int j = 1; j <= n; j++){
        for (int s = 1; s <= n - j; s++) {
            cout << " ";
        }
        for (int i = 1; i <= j; i+=1 ){
            cout << i;
        }   
        for (int i = j - 1; i >= 1; i-=1 ){
            cout << i;
        } 
        cout << "\n";
    }
}
