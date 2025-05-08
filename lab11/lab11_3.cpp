#include <iostream>
using namespace std;

int main() {
    const int n = 3, m = 4;
    int A[n][m] = {{6, 1, 4, 2}, {6, 12, 6, 6}, {0, 3, 6, 2}};
    int pos_sum = 0, pos_count = 0, neg_sum = 0, neg_count = 0, zeros = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            if (A[i][j] > 0) {
                pos_sum += A[i][j];
                pos_count++;
            } else if (A[i][j] < 0) {
                neg_sum += A[i][j];
                neg_count++;
            } else zeros++;
        }

    cout << "serd = " << (pos_count ? pos_sum / pos_count : 0)
         << ", serv = " << (neg_count ? neg_sum / neg_count : 0)
         << ", kilk0 = " << zeros << endl;

    return 0;
}