#include <iostream>
#include <climits>
using namespace std;

int main() {
    const int n = 3;
    int A[n][n] = {{6, 4, 2}, {6, 1, 6}, {0, 6, -6}};
    int min_above_diag = INT_MAX, side_diag_sum = 0;

    for (int i = 0; i < n; i++) {
        side_diag_sum += A[i][n - i - 1];
        for (int j = i + 1; j < n; j++) {
            if (A[i][j] < min_above_diag)
                min_above_diag = A[i][j];
        }
    }

    cout << "Мінімальний елемент = " << min_above_diag << endl;
    cout << "Сума бічної діагоналі = " << side_diag_sum << endl;

    return 0;
}