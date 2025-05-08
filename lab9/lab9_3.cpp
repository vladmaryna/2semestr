#include <iostream>
using namespace std;

int main() {
    float zero = 0.0, pi = 3.141593, Euler = 2.718282;
    float* ptr = &Euler;

    cout << "ptr = " << ptr << ", *ptr = " << *ptr << endl;
    cout << "ptr+1 = " << (ptr + 1) << ", *(ptr+1) = " << *(ptr + 1) << endl;
    cout << "ptr-1 = " << (ptr - 1) << ", *(ptr-1) = " << *(ptr - 1) << endl;

    return 0;
}