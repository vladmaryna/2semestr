#include <iostream>
#include <set>
using namespace std;

int main() {
    int a[] = {31, 31, 2, 0, 31, 2};
    int n = 6;
    set<int> unique;

    for (int i = 0; i < n; i++)
        unique.insert(a[i]);

    cout << "Кількість різних елементів = " << unique.size() << endl;
    return 0;
}