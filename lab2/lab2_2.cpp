#include <iostream>
using namespace std;

int main(){

    char S[100];
    cin.getline(S, 100);

    int i=0;
    int max=0, min=0, sl=0;

    while(S[i]!='\0') {
        if(S[i]!= ' ') {
            sl++;
        }
        else if(sl>0) {
            if(sl<min) min=sl;
            if(sl>max) max=sl;
            sl=0;
        }
        i++;
    }
    if(sl>0) {
        if(sl<min) min=sl;
        if(sl>max) max=sl;
    }
    cout <<min<<","<<max<< endl;

    return 0;
}
