#include <fstream>
#include <string>
using namespace std;
int main() {
    int K;
    cin >> K;
    ifstream in("input.txt");
    ofstream out("output.txt");
    string line;
    while (getline(in, line)) {
        if (line.size() > K) out << line.substr(K) << endl;
    }
    in.close();
    out.close();
    return 0;
}