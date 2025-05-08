#include <iostream>
using namespace std;

char checkValue(int n) {
    if (n == 1) return 'p';
    else if (n == -1) return 'n';
    else {
        cout << "Помилка: число не 1 і не -1.\n";
        return '0';
    }
}

int main() {
    int num;
    cout << "Введіть ціле число: ";
    cin >> num;

    char result = checkValue(num);
    cout << "Результат: " << result << endl;
    return 0;
}