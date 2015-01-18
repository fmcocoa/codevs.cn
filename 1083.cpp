#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int a;

    for (a = 1; a * (a + 1) / 2 < n; a++)
        ;

    int b = n - a * (a - 1) / 2;

    if (a % 2 == 0) {
        cout << b << '/' << a + 1 - b;
    } else {
        cout << a + 1 - b << '/' << b;
    }

    return 0;
}
