#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int n = 3;
    int **A = new int*[n];
    for (int i = 0; i < n; i++) {
        A[i] = new int[n];
        for (int j = 0; j < n; j++)
            A[i][j] = rand() % 9 + 1;
    }

    int min_val = A[0][0], max_val = A[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (A[i][j] < min_val) min_val = A[i][j];
            if (A[i][j] > max_val) max_val = A[i][j];
        }

    cout << "min*max = " << min_val * max_val << endl;

    for (int i = 0; i < n; i++) delete[] A[i];
    delete[] A;

    return 0;
}
