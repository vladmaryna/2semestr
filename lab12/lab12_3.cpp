#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a[] = {-2, -1, 2, 0, 3, -2};
    int n = 6;
    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];

    vector<int> result;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) result.push_back(sum);
        result.push_back(a[i]);
    }

    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}