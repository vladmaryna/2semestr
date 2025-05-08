#include <fstream>
using namespace std;

int main() {
    int n = 5;
    ofstream file("numbers.txt");
    int count = 0, num = 2;
    while (count < n) {
        if (num % n == 0) {
            file << num << " ";
            count++;
        }
        num += 2;
    }
    file.close();
    return 0;
}