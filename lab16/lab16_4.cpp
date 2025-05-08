#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ifstream file("text.txt");
    vector<string> lines;
    string line;
    while (getline(file, line))
        lines.push_back(line);
    file.close();

    if (!lines.empty()) lines.pop_back();

    ofstream out("text.txt");
    for (const string& l : lines)
        out << l << endl;
    out.close();

    return 0;
}