#include <iostream>

using namespace std;

static long buf[1000];

long calc(int n) {
    if (n == 0) {
        return 1;
    }

    if (buf[n - 1] == 0) {
        if (n == 1)
            buf[0] = 1;
        else if (n == 2)
            buf[1] = 2;
        else {
            buf[n - 1] = calc((n / 2) * 2 - 2) + calc(n / 2);
        }
    }

    return buf[n - 1];
}

int main() {
    int a;

    cin >> a;

    cout << calc(a);

    return 0;
}
