#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int n = 3, m = 3;
    int A[n][m] = {{2, 3, 4}, {5, 1, 6}, {3, 9, 0}};
    int B[m];

    for (int j = 0; j < m; j++) {
        int col_min = A[0][j], col_max = A[0][j], row_min = 0, row_max = 0;
        for (int i = 1; i < n; i++) {
            if (A[i][j] < col_min) {
                col_min = A[i][j];
                row_min = i;
            }
            if (A[i][j] > col_max) {
                col_max = A[i][j];
                row_max = i;
            }
        }
        int prod = 1;
        for (int k = 0; k < m; k++)
            prod *= A[row_min][k];
        for (int k = 0; k < m; k++)
            prod *= A[row_max][k];
        B[j] = prod;
    }

    for (int j = 0; j < m; j++)
        cout << B[j] << " ";
    cout << endl;

    return 0;
}