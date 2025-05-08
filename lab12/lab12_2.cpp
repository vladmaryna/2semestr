#include <iostream>
using namespace std;

int main() {
    int n = 6, m = 5;
    double *a = new double[n]{31, -6, 2, 0, 33, 6};
    double *b = new double[m]{31, 22, -10, 3, 2};
    int count_a = 0, count_b = 0;

    for (int i = 0; i < n; ++i)
        if (static_cast<int>(a[i]) % 3 != 0) count_a++;

    for (int i = 0; i < m; ++i)
        if (static_cast<int>(b[i]) % 3 != 0) count_b++;

    cout << "Кількість = " << (count_a > count_b ? count_a : count_b) << endl;
    if (count_a > count_b)
        for (int i = 0; i < n; ++i) cout << a[i] << " ";
    else
        for (int i = 0; i < m; ++i) cout << b[i] << " ";
    cout << endl;

    delete[] a;
    delete[] b;

    return 0;
}