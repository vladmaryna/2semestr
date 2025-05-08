#include <fstream>
#include <stack>
using namespace std;
int main() {
    ifstream in("code.txt");
    stack<char> s;
    char ch;
    bool valid = true;
    while (in.get(ch)) {
        if (ch == '(' || ch == '{') s.push(ch);
        else if (ch == ')') {
            if (s.empty() || s.top() != '(') {
                valid = false;
                break;
            }
            s.pop();
        } else if (ch == '}') {
            if (s.empty() || s.top() != '{') {
                valid = false;
                break;
            }
            s.pop();
        }
    }
    if (!s.empty()) valid = false;
    ofstream out("result.txt");
    out << (valid ? "YES" : "NO");
    return 0;
}