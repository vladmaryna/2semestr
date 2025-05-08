#include <fstream>
#include <vector>
using namespace std;
int main() {
    ifstream in("input.txt");
    vector<int> nums;
    int num;
    while (in >> num) nums.push_back(num);
    in.close();
    ofstream out("output.txt");
    for (int i = 0; i < nums.size(); ++i) {
        out << nums[i] << " ";
        if (i % 2 == 0 && nums[i] % 2 == 0) out << nums[i] << " ";
    }
    out.close();
    return 0;
}