#include <iostream>
#include <utility>

using namespace std;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    if (a > b) {
        swap(a, b);
    }
    if (b > c) {
        swap(b, c);
    }
    if (a > b) {
        swap(a, b);
    }
    if (y > x){
        swap(x, y);
    }
    if ((b <= x) and (a <= y)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}