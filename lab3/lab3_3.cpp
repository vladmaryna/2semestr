#include <iostream>
using namespace std;

int main() {
    char S1[100], S2[100];
    cin.getline(S1, 100);
    cin.getline(S2, 100);

    int k1 = 0, k2 = 0;

    char K[] = "aeiouAEIOU";

    for (int i = 0; S1[i] != '\0'; i++) {
        for (int j = 0; K[j] != '\0'; j++) {
            if (S1[i] == K[j]) {
                k1++;
                break;
            }
        }
    }


    for (int i = 0; S2[i] != '\0'; i++) {
        for (int j = 0; K[j] != '\0'; j++) {
            if (S2[i] == K[j]) {
                k2++;
                break;
            }
        }
    }

    cout << "k1" << k1 << endl;
    cout << "k2" << k2 << endl;

    return 0;
}