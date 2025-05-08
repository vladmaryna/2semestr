#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> data = {-5, 10, -3, 9, -15};
    queue<int> q;
    for (int val : data) q.push(val);

    int min_val = q.front(), max_val = q.front();
    queue<int> tmp = q;
    while (!tmp.empty()) {
        int val = tmp.front(); tmp.pop();
        if (val < min_val) min_val = val;
        if (val > max_val) max_val = val;
    }

    vector<int> new_q;
    while (!q.empty()) {
        int val = q.front(); q.pop();
        if (val == min_val) new_q.push_back(max_val);
        else if (val == max_val) new_q.push_back(min_val);
        else new_q.push_back(val);
    }

    vector<int> final_q;
    for (int val : new_q)
        if (val % 3 != 0) final_q.push_back(val);

    for (int val : final_q)
        cout << val << " ";
    cout << endl;

    return 0;
}