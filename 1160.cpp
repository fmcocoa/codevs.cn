#include <iostream>
using namespace std;

#define idx(base, offset, i, j) ((offset + i) * base + offset + j)

void set_matrix(int *matrix, int base, int n,  int offset = 0) {
    if (n == 1) {
        matrix[idx(base, offset, 0, 0)] = 1;
        return;
    }

    int num = n * n;
    for (int j = n - 1; j > 0; j--)
        matrix[idx(base, offset, n - 1, j)] = num--;
    for (int i = n - 1; i > 0; i--)
        matrix[idx(base, offset, i, 0)] = num--;
    for (int j = 0; j < n - 1; j++)
        matrix[idx(base, offset, 0, j)] = num--;
    for (int i = 0; i < n - 1; i++)
        matrix[idx(base, offset, i, n - 1)] = num--;

    set_matrix(matrix, base, n - 2, offset + 1);
}

int main() {
    int n;
    cin >> n;

    int *matrix = new int[n * n];

    set_matrix(matrix, n, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i * n + j] << ' ';
        }
        cout << endl;
    }

    int sum = 1;
    for (int i = 3; i <= n; i += 2) {
        for (int j = 0; j < 4; j++) {
            sum += i * i - j * (i - 1);
        }
    }
    cout << sum;

    delete [] matrix;

    return 0;
}
