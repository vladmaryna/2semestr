#include <iostream>
using namespace std;

int main(){

    char S[100];
    cin.getline(S, 100);
    int i=0;

    while(S[i]!='\0') {
        if(S[i]== ' ' && S[i+1]!='\0') {
            if (S[i+2]!='\0'){
                cout<<S[i+1]<<S[i+2];
            }
            cout << " ";
        }
        i++;
    }
    cout << endl;

    return 0;
}
