// Fenwick Tree (Binary Indexed Tree)
#include <iostream>
#include <vector>
using namespace std;

class FenwickTree {
    vector<int> bit;
    int n;
public:
    FenwickTree(int size) : n(size) { bit.assign(n + 1, 0); }
    void update(int idx, int val) {
        for (++idx; idx <= n; idx += idx & -idx) bit[idx] += val;
    }
    int query(int idx) {
        int res = 0;
        for (++idx; idx > 0; idx -= idx & -idx) res += bit[idx];
        return res;
    }
};

int main() {
    FenwickTree ft(6);
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    for (int i = 0; i < arr.size(); i++) ft.update(i, arr[i]);
    cout << "Sum of first 4 elements: " << ft.query(3) << endl;
    return 0;
}
