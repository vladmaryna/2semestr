#include <fstream>
using namespace std;

int main() {
    ofstream file("triangle.txt");
    file << 3 << " " << 4 << " " << 5 << endl;
    file.close();

    ifstream infile("triangle.txt");
    int a, b, c;
    infile >> a >> b >> c;
    infile.close();

    ofstream outfile("triangle.txt", ios::app);
    if (a + b > c && a + c > b && b + c > a)
        outfile << "Triangle exists" << endl;
    else
        outfile << "Triangle does not exist" << endl;
    outfile.close();

    return 0;
}