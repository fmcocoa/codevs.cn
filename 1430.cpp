#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n == 1) {
        return false;
    }

    if (n % 2 == 0) {
        return false;
    }

    for (int i = 3; i <= sqrt(n); i++) {
        if ( n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int a;
    cin >> a;

    if (is_prime(a)) {
        cout << "\\t";
    } else {
        cout << "\\n";
    }

    return 0;
}
