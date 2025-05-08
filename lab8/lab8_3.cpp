#include <iostream>
using namespace std;

float Area1(int n, float a, float b, float h) {
    switch (n) {
        case 1: return (a * h) / 2;
        case 2: return a * b;
        case 3: return (a + b) * h / 2;
        default: return 0;
    }
}

int main() {
    int n = 3;
    float a = 10, b = 20, h = 2;
    cout << "S = " << Area1(n, a, b, h) << endl;
    return 0;
}