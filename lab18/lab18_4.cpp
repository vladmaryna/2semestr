#include <fstream>
#include <vector>
using namespace std;
int main() {
    ifstream in("input.txt");
    vector<int> nums;
    int num;
    while (in >> num) nums.push_back(num);
    int sum = 0;
    int start = nums.size() >= 16 ? nums.size() - 16 : 0;
    vector<vector<int>> matrix(4, vector<int>(4));
    for (int i = start, k = 0; i < nums.size(); ++i, ++k) matrix[k/4][k%4] = nums[i];
    for (int i = 1; i < 4; ++i)
        for (int j = 0; j < i; ++j)
            sum += matrix[i][j];
    ofstream out("output.txt");
    out << sum;
    return 0;
}