#include <iostream>
using namespace std;

int main() {
    int range[1000] = {0};
    int n;

    cin >> n;
    int *nums = new int[n];

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        range[x] = 1;
    }

    int j = 0;
    for (int i = 0; i < 1000; i++) {
        if (range[i] == 1) {
            nums[j++] = i;
        }
    }

    cout << j << endl;
    for (int i = 0; i < j - 1; i++) {
        cout << nums[i] << ' ';
    }
    cout << nums[j - 1];

    delete [] nums;
    return 0;
}
