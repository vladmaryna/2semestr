#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a[] = {3, -7, -12, 13, -7};
    int n = 5;
    double max_val = fabs(a[0]);
    int first = -1, second = -1;

    for (int i = 0; i < n; i++) {
        if (fabs(a[i]) > max_val)
            max_val = fabs(a[i]);
        if (a[i] > 0) {
            if (first == -1) first = i;
            else if (second == -1) {
                second = i;
                break;
            }
        }
    }

    double sum = 0;
    for (int i = first + 1; i < second; i++)
        sum += a[i];

    cout << "max = " << max_val << ", sum = " << sum << endl;
    return 0;
}