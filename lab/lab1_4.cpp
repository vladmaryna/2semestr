#include <iostream>
using namespace std;

int main(){

    int n,m, l=0;
    cin >>n>>m;
    int A[n][m][n];

    srand(time(NULL));
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            for (int k=0; k<n; k++) {
                A[i][j][k]=rand()%200-100;
                cout << A[i][j][k]<< "\t";
            }
        }
        cout<<endl;
    }


    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            for (int k=0; k<n; k++) {
                if (A[i][j][k]%7==0 && A[i][j][k]%9==0) {
                    l++;
                }
            }
        }
    }

    for (int i=0; i<n; i++) {
        cout << "Шар"<< i+1 << "\n";
        for (int j=0; j<m; j++) {
            for (int k=0; k<n; k++) {
                cout << A[i][j][k]<< "\t";
            }
            cout <<"\n";
        }
        cout << "\n";
    }
    cout <<"l"<< l << endl;
    return 0;
}