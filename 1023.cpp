#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;

    cin >> n;

    double total = 0, got = 0;

    for (int i = 0; i < n; i++) {
        double a, b;
        cin >> a >> b;
        total += a;
        got += a * b;
    }

    cout.precision(2);
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << got / total << endl;

    return 0;
}
