#include <iostream>
#include <cmath>
using namespace std;

double geomSum(int n, double q, double b1) {
    if (n == 1) return b1;
    return geomSum(n - 1, q, b1) + b1 * pow(q, n - 1);
}

int main() {
    int n = 5;
    double q = 3, b1 = 5;
    cout << "sn = " << geomSum(n, q, b1) << endl;
    return 0;
}
