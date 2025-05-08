#include <iostream>
using namespace std;

int main() {
    char ac = 'f', bc = '2';
    char *pac = &ac, *pbc = &bc;

    long int al = 3, bl = 4;
    long int *pal = &al, *pbl = &bl;

    cout << "\nЗначення і різниця вказівників: ";
    cout << "\npac= " << (void*)pac << "\tpbc= " << (void*)pbc;
    cout << "\t(pac-pbc)= " << (pac - pbc);
    cout << "\npal= " << pal << "\tpbl= " << pbl << "\t(pbl-pal)= " << (pbl - pal);
    cout << "\nРізниця числових значень вказівників: ";
    cout << "\n(int)pac-(int)pbc= " << (int)(intptr_t)pac - (int)(intptr_t)pbc;
    cout << "\n(int)pbl-(int)pal= " << (int)(intptr_t)pbl - (int)(intptr_t)pal;

    return 0;
}