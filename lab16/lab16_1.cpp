#include <fstream>
using namespace std;

int main() {
    ofstream file("greeting.txt");
    file << "Hello, this is a test. Number: " << 123 << endl;
    file.close();
    return 0;
}