#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q, result;
    q.push(3); q.push(4); q.push(7); q.push(8);

    int sum = 0, count = 0;
    while (!q.empty()) {
        int val = q.front(); q.pop();
        if (val % 2 != 0) {
            result.push(val);
            sum += val;
            count++;
        }
    }

    double avg = count ? (double)sum / count : 0;
    cout << "Average = " << avg << endl;

    return 0;
}