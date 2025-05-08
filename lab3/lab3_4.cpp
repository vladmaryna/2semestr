#include <iostream>
#include <stack>
using namespace std;

bool balans(const char S[]) {
    stack<char> st;

    for (int i = 0; S[i] != '\0'; i++) {
        char c = S[i];

        if (c == '(' || c == '{' || c == '[') st.push(c);  
        else if (c == ')' && !st.empty() && st.top() == '(') st.pop();
        else if (c == '}' && !st.empty() && st.top() == '{') st.pop();
        else if (c == ']' && !st.empty() && st.top() == '[') st.pop();
        else if (c == ')' || c == '}' || c == ']') return false;
    }

    return st.empty();
}

int main() {
    char S[100];
    cin.getline(S, 100);

    cout << (balans(S) ? "ok": "vse pohano") << endl;

    return 0;
}