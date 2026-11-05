#include <iostream>

using namespace std;

int main() {
    double W, L, H, w, l, h;
    double count, max = 0;
    cin >> W >> L >> H >> w >> l >> h;

    count = (W / w) * (L / l) * (H / h);
    if (count > max) {
        max = count;
    }

    count = (W / w) * (L / h) * (H / l);
    if (count > max) {
        max = count;
    }

    count = (W / l) * (L / w) * (H / h);
    if (count > max) {
        max = count;
    }

    count = (W / l) * (L / h) * (H / w);
    if (count > max) {
        max = count;
    }

    count = (W / h) * (L / w) * (H / l);
    if (count > max) {
        max = count;
    }

    count = (W / h) * (L / l) * (H / w);
    if (count > max) {
        max = count;
    }

    cout << max;
}
