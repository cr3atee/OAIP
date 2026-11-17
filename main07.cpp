#include <iostream>
using namespace std;

int main()
{
    int x, i = 0;
    cin >> x;
    while(x != 0){
        if (x > i) i=x;
         cin >> x;
    }
    cout << i;
}