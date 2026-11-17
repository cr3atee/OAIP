#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while (b != 0){
        a +=1;
        b -=1;
    }
    cout << a;
}