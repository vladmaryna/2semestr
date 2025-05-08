#include <iostream>
using namespace std;

double sumr(int n) {
    if (n == 1) return 1.0;
    return 1.0 / n + sumr(n - 1);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "s = " << sumr(n) << endl;
    return 0;
}