#include <iostream>
using namespace std;

int main()
{
    int x, i, res = 0;
    cin >> x;
    while(x != 0){
        i = x;
        cin >> x;
        if ((x != 0) and (x > i)) res++;
    }
    cout << res;
}