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
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b);

    return 0;
}
