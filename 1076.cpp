#include <iostream>
#include <cstdlib>
using namespace std;

int comp(const void *a, const void *b) {
    return ( *(int *)a - *(int *)b );
}

int main() {
    int a;
    cin >> a;

    int * nums = new int[a];

    for (int i = 0; i < a; i++) {
        cin >> nums[i];
    }

    qsort(nums, a, sizeof(int), comp);

    for (int i = 0; i < a - 1; i++) {
        cout << nums[i] << ' ';
    }
    cout << nums[a - 1];

    delete [] nums;

    return 0;
}
