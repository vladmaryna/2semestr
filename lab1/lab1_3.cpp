#include <iostream>
using namespace std;

int main(){

    int n;
    cin >>n;
    int A[n][n];

    srand(time(NULL));
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            A[i][j]=rand()%21-10;
            cout << A[i][j]<< "\t";
        }
        cout<<endl;
    }

    double sum_p=0;
    double sum_n=0;
    double k=0;


    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){

            if(j<=n-1-i){
                if(A[i][j]>0) sum_p+=A[i][j];
                if(A[i][j]<0) sum_n+=A[i][j];
                k++;

            }
            cout << A[i][j]<< "\t";
        }
        cout<<endl;
    }
    double ser=0;
    if(k>0) {
        ser=(sum_p+sum_n)/k;
    }

    cout<<k<<endl;
    cout<<"sum_p"<<sum_p<<endl;
    cout<<"sum_n"<<sum_n<<endl;
    cout<<"ser"<<ser<<endl;

    return 0;
}