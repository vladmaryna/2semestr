#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int arr[] = {-4, 2, 2, -3, 4, 2, -4, 1, -2, 0};
    int n = 10;
    int max_abs = 0;

    for (int i = 0; i < n; ++i)
        if (abs(arr[i]) > abs(arr[max_abs]))
            max_abs = i;

    cout << "Елементи: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << "\nНомери з найбільшим модулем: ";
    for (int i = 0; i < n; ++i)
        if (abs(arr[i]) == abs(arr[max_abs]))
            cout << i + 1 << " ";
    cout << endl;

    return 0;
}