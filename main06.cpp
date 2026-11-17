#include <iostream>
using namespace std;

int main()
{
    int x, i = 0;
    cin >> x;
    while(x != 0){
        i += !(x & 1);
         cin >> x;
    }
    cout << i;
}