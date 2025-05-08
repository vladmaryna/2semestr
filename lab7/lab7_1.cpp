#include <iostream>
using namespace std;

const double PI = 3.14159;

double volumeCylinder(double r, double h) {
    return 2 * PI * r * h;
}

int main() {
    double radius, height;
    cout << "Введіть радіус: ";
    cin >> radius;
    cout << "Введіть висоту: ";
    cin >> height;

    double volume = volumeCylinder(radius, height);
    cout << "Обʼєм циліндра: " << volume << endl;
    return 0;
}