#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x == 5){
        cout << "otlichno";
    }
    else if (x == 4){
        cout << "horosho";
    }
    else if (x == 3){
        cout << "udovl";
    }
    else if (x == 2){
        cout << "neud";
    }
    else
        cout << "nevernaya ocenka";
}