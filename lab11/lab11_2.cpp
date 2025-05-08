#include <iostream>
using namespace std;

int main() {
    const int n = 3, m = 4;
    int A[n][m] = {{6, 1, 4, 2}, {6, 12, 10, 1}, {0, 3, 6, 2}};

    int min_val = A[0][0], min_row = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (A[i][j] < min_val) {
                min_val = A[i][j];
                min_row = i;
            }

    cout << "Result:\n";
    for (int i = 0; i < n; i++) {
        if (i == min_row) continue;
        for (int j = 0; j < m; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    return 0;
}