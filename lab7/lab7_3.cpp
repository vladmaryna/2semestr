#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    int num;
    cout << "N: ";
    cin >> num;

    cout << "ob ch: " << reverseNumber(num) << endl;
    return 0;
}