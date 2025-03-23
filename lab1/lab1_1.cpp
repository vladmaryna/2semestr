#include <iostream>
using namespace std;

int main(){
   
    int n, m;
    cin >>n>>m;
    int F[n][m];
   
    srand(time(NULL));
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            F[i][j]=rand()%21-10;
            cout << F[i][j]<< "\t";
        }
        cout<<endl;
    }
   
    int B;
    cin>>B;
    long long dob=1;
   
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if(F[i][j]>B){
                dob*=F[i][j];
               
            }
            cout << F[i][j]<< "\t";
        }
        cout<<endl;
    }
    cout<<dob<<endl;
   
   
    return 0;
} 