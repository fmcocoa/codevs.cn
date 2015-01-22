#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    double s = 0;

    int i;
    for (i = 1; s <= n; i++) {
        s += 1 / (double)i;
    }

    cout << i - 1 << endl;

    return 0;
}
