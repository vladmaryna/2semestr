#include <fstream>
#include <vector>
#include <iostream>
using namespace std;
int main() {
    int n, count = 0, size;
    cin >> size >> n;
    vector<double> arr(size);
    for (int i = 0; i < size; ++i) cin >> arr[i];
    ofstream out("data.txt");
    for (double num : arr) out << num << " ";
    out.close();
    ifstream in("data.txt");
    double num;
    while (in >> num) if (num > n) ++count;
    cout << count << endl;
    return 0;
}