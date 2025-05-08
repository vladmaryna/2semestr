#include <iostream>
using namespace std;

int main() {
 const int n = 3, m = 4;
 int A[n][m] = {{6, 1, 4, 2}, {5, 3, 1, 0}, {9, 3, 6, -1}};

 for (int i = 0; i < n; i++)
  for (int j = 0; j < m; j++)
   if (A[i][j] % 2 == 0)
    A[i][j] = 14;

 cout << "Result:\n";
 for (int i = 0; i < n; i++) {
  for (int j = 0; j < m; j++)
   cout << A[i][j] << " ";
  cout << endl;
 }
 return 0;
}