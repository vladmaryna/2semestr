#include <iostream>
using namespace std;

int main() {
    char S[100];
    cin.getline(S, 100);

    int i = 0, j = 0;

    while (S[i] != '\0') {
        if (!(S[i] == ' ' && S[i + 1] == ' ')) {
            S[j] = S[i];
            j++;
        }
        i++;
    }
    S[j] = '\0';

    return 0;
}
Mathematic  – a  queen   of the   science