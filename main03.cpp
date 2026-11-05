#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if ((x % 2 == 0) and (y % 2 == 0)){
        cout << "oba chetnie";
    }
    else if (x % 2 != 0 and y % 2 !=0){
        cout << "oba ne chetnie";
    }
    else
        cout << "odo chetoe drugoe ne chetnoe";
}