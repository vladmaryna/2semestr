#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double perimeter(double x1, double y1, double x2, double y2, double x3, double y3) {
    return distance(x1, y1, x2, y2) +
           distance(x2, y2, x3, y3) +
           distance(x3, y3, x1, y1);
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    cout << "koord:
";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    cout << "Pt: " << perimeter(x1, y1, x2, y2, x3, y3) << endl;
    return 0;
}