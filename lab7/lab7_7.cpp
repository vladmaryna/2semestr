#include <iostream>
#include <cmath>
using namespace std;

const double EPSILON = 1e-3;

double f(double x) {
    return x * x;
}

double trapezoidal(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = (f(a) + f(b)) / 2.0;
    for (int i = 1; i < n; ++i) {
        sum += f(a + i * h);
    }
    return h * sum;
}

int main() {
    double a, b;
    cout << "Введіть межі інтегрування [a, b]: ";
    cin >> a >> b;

    int n = 2;
    double prev = trapezoidal(a, b, n);
    double curr;

    do {
        n *= 2;
        curr = trapezoidal(a, b, n);
    } while (fabs(curr - prev) > EPSILON);

    cout << "Інтеграл ≈ " << curr << " (n = " << n << ")" << endl;
    return 0;
}