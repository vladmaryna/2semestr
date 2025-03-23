#include <iostream>
using namespace std;

int main(){

    int n, m;
    cin >>n>>m;
    int A[n][m];

    srand(time(NULL));
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            A[i][j]=rand()%21-10;
            cout << A[i][j]<< "\t";
        }
        cout<<endl;
    }


    for (int i=0; i<n; i++){
        int min_i=0;
        for (int j=0; j<m; j++){
            if (A[i][j]<A[i][min_i]){
                min_i=j;

            }
        }
        int t=A[i][min_i];
        A[i][min_i]=A[i][m-1];
        A[i][m-1]=t;
        cout<<endl;
    }
    cout << "--------------A----------" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }


    return 0;
}