#include <fstream>
#include <vector>
#include <string>
using namespace std;
int main() {
    ifstream in("input.txt");
    vector<int> lengths;
    string line;
    while (getline(in, line)) lengths.push_back(line.length());
    ofstream out("output.txt");
    for (int l : lengths) out << l << " ";
    return 0;
}