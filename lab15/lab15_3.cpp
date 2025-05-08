#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> data = {-10, 5, 3, 20, -20, 15};
    queue<int> q;
    for (int val : data) q.push(val);

    int min_val = q.front(), max_val = q.front();
    vector<int> tmp_vec;
    while (!q.empty()) {
        int val = q.front(); q.pop();
        tmp_vec.push_back(val);
        if (val < min_val) min_val = val;
        if (val > max_val) max_val = val;
    }

    int idx_min = find(tmp_vec.begin(), tmp_vec.end(), min_val) - tmp_vec.begin();
    int idx_max = find(tmp_vec.begin(), tmp_vec.end(), max_val) - tmp_vec.begin();

    int start = min(idx_min, idx_max);
    int end = max(idx_min, idx_max);

    vector<int> filtered;
    for (int i = 0; i < tmp_vec.size(); i++)
        if (i <= start || i >= end) filtered.push_back(tmp_vec[i]);

    sort(filtered.begin(), filtered.end());

    for (int val : filtered) cout << val << " ";
    cout << endl;

    return 0;
}