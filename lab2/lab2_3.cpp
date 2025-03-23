#include <iostream>
using namespace std;

int main() {
    char S[100];
    cin.getline(S, 100);

    int persh_ind=-1;
    int sl_ind=-1;
    int i=0;

    while(S[i]!='\0') {
        if(S[i]== ' ' && persh_ind==-1) {
            persh_ind=i;
        }
        if (S[i]==' ') {
            sl_ind=i+1;
        }
        i++;
    }
    cout<<"persh_ind="<<persh_ind;
    cout<<endl;

    while(S[sl_ind]!='\0' && S[sl_ind]!=' ') {
        cout<<S[sl_ind];
        sl_ind++;
    }

    return 0;
}
Mathematic– a queen of the science