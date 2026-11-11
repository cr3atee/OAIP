#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    while(x % 10 == 0){
        x = x/10;
    }
    cout << x;
}
