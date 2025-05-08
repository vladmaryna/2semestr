#include <fstream>
#include <vector>
#include <iostream>
using namespace std;
int main() {
    int size, max_val = INT_MIN, num;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; ++i) cin >> arr[i];
    ofstream out("data.txt");
    for (int n : arr) out << n << " ";
    out.close();
    ifstream in("data.txt");
    while (in >> num) if (num > max_val) max_val = num;
    cout << max_val << endl;
    return 0;
}