#include <iostream>
using namespace std;

int main() {
    char S[100], A[200];
    cin.getline(S, 100);

    int i = 0, j = 0;

    while (S[i] != '\0') {
        char c = S[i];

        if (c != ' ') {
            A[j] = c;
            j++;


            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                A[j] = c;
                j++;
                }
        }
        i++;
    }

    A[j] = '\0';

    cout << A << endl;

    return 0;
}