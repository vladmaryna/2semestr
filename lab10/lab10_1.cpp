#include <iostream>
using namespace std;

int main() {
    double a[] = {13, 7, 12, 13, 7};
    int n = 5;
    double min_val = a[1]; // even indices in 1-based: 2, 4 -> indices 1, 3

    for (int i = 1; i < n; i += 2)
        if (a[i] < min_val)
            min_val = a[i];

    cout << "min = " << min_val << endl;
    return 0;
}