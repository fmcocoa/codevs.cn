#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int prev = 0;
    int time = 0;

    for (int i = 0; i < n; i++) {
        int next;
        cin >> next;

        if (next > prev) {
            time += (next - prev) * 6 + 5;
        } else {
            time += (prev - next) * 4 + 5;
        }

        prev = next;
    }

    cout << time << endl;

    return 0;
}
