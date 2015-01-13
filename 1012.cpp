#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int r;

    while ((r = a % b) != 0) {
        a = b;
        b = r;
    }

    return b;
}

int main() {
    int x, y;
    cin >> x >> y;

    if (x == y) {
        cout << 1;
    } else {
        if (x > y) {
            int tmp = x;
            x = y;
            y = tmp;
        }

        int count = 0;

        for (int i = 1; x * i * i < y; i++) {
            if (y % i == 0 && y / i % x == 0 && gcd(y / i, x * i) == x) {
                cout << "---" << i << endl;
                count++;
            }
        }

        cout << 2 * count;
    }

    return 0;
}
