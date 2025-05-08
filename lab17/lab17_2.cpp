#include <fstream>
#include <vector>
#include <string>
using namespace std;
int main() {
    int K;
    cin >> K;
    ifstream in("input.txt");
    vector<string> lines;
    string line;
    while (getline(in, line)) lines.push_back(line);
    in.close();
    ofstream out("output.txt");
    for (int i = 0; i < lines.size() - K; ++i) out << lines[i] << endl;
    out.close();
    return 0;
}