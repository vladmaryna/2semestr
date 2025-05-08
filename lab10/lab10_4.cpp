#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> a = {3, 11, -10, 12, 35, 2};
    vector<double> result;
    double sum = 0;

    for (size_t i = 0; i < a.size(); i++) {
        result.push_back(a[i]);
        sum += a[i];
        if (static_cast<int>(a[i]) % 5 == 0)
            result.push_back(sum - a[i]);
    }

    cout << "a[i] = ";
    for (double x : result) cout << x << " ";
    cout << endl;

    return 0;
}