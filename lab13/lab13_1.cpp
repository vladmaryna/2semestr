#include <iostream>
#include <vector>
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
            A[i][j] = rand() % 21 - 10;
    }

    vector<int> b, c;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (A[i][j] < 0) b.push_back(A[i][j]);
            if (A[i][j] > 0) c.push_back(A[i][j]);
        }

    int sum_b = 0, sum_c = 0;
    for (int x : b) sum_b += x;
    for (int x : c) sum_c += x;

    cout << "Sum negative = " << sum_b << ", Sum positive = " << sum_c << endl;

    for (int i = 0; i < n; i++) delete[] A[i];
    delete[] A;

    return 0;
}