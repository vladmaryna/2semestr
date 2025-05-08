#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const char* text = "Programming and computing";
    char* str = new char[strlen(text) + 1];
    strcpy(str, text);

    int count = 0, len = 0;
    for (int i = 0; ; i++) {
        if (isalpha(str[i])) len++;
        else {
            if (len > 7) count++;
            len = 0;
            if (str[i] == '\0') break;
        }
    }

    cout << "Count = " << count << endl;
    delete[] str;
    return 0;
}