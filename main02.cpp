#include <iostream>
using namespace std;

int main()
{
    int sum = 0, prod = 1;
    for(int i = 5; i <= 35; i+=5){
        sum += i;
        prod *= i;
    }
    cout << sum << '\n' << prod;
}