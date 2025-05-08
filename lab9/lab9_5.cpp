#include <iostream>
using namespace std;

int main() {
    double a[] = {3, -63, 12, -33, 77, 22};
    int n = 6;
    double* ptr = a;
    double max = -1e9;

    for (int i = 0; i < n; i++) {
        cout << "Address of a[" << i << "] = " << (ptr + i) << endl;
        if (*(ptr + i) < 0 && *(ptr + i) > max) max = *(ptr + i);
    }

    cout << "Max negative = " << max << endl;
    return 0;
}