#include <iostream>
using namespace std;

double max(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    double a, b, c;
    cout << "Введіть a, b, c: ";
    cin >> a >> b >> c;

    double result = (max(a + max(b, c), b + max(c, c)) + 1) /
                    (max(max(a, b), c * c) + (b - c * c));
    cout << "Результат: " << result << endl;
    return 0;
}