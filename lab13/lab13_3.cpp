#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void capitalize_words(char* s) {
    bool new_word = true;
    for (int i = 0; s[i]; i++) {
        if (isspace(s[i])) new_word = true;
        else if (new_word) {
            s[i] = toupper(s[i]);
            new_word = false;
        }
    }
}

int main() {
    string input = "Programming and computing";
    char* str = new char[input.length() + 1];
    strcpy(str, input.c_str());

    capitalize_words(str);
    cout << str << endl;

    delete[] str;
    return 0;
}