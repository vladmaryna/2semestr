#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool has_same_digits(int num) {
    num = abs(num);
    int d1 = num % 10;
    int d2 = (num / 10) % 10;
    return d1 == d2;
}

int main() {
    srand(time(0));
    int n = 3;
    int **A = new int*[n];
    for (int i = 0; i < n; i++) {
        A[i] = new int[n];
        for (int j = 0; j < n; j++)
            A[i][j] = rand() % 90 + 10;
    }

    int total = 0;
    for (int j = 0; j < n; j++) {
        bool valid = true;
        for (int i = 0; i < n; i++)
            if (has_same_digits(A[i][j])) valid = false;
        if (valid)
            for (int i = 0; i < n; i++) total += A[i][j];
    }

    cout << "Sum = " << total << endl;

    for (int i = 0; i < n; i++) delete[] A[i];
    delete[] A;

    return 0;
}