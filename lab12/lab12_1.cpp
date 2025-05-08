#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n = 6;
    double *a = new double[n]{31, 31, 2, 0, 31, 2};
    double *b = new double[n]{-22, 31, 22, -10, 1, 2};
    double *c = new double[n];

    for (int i = 0; i < n; ++i)
        c[i] = a[i] + b[i];

    for (int i = 0; i < n; ++i)
        cout << c[i] << " ";
    cout << endl;

    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}