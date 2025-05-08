#include <iostream>
using namespace std;

int main() {
    char S[100];
    cin.getline(S, 100);

    int i = 0, k = 0, ch=0;

    while (S[i] != '\0') {
        if (S[i]== ' ') {
            k++;
        }
        if (S[i] >= '0' && S[i] <= '9') {
            ch++;
        }
        i++;
    }
    cout << k << endl;
    cout << ch << endl;



    return 0;
}