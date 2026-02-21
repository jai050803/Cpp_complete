// Segment Tree (Range Sum Query)
#include <iostream>
#include <vector>
using namespace std;

class SegmentTree {
    vector<int> tree;
    int n;
public:
    SegmentTree(const vector<int>& arr) {
        n = arr.size();
        tree.resize(4 * n);
        build(arr, 1, 0, n - 1);
    }
    void build(const vector<int>& arr, int node, int l, int r) {
        if (l == r) tree[node] = arr[l];
        else {
            int mid = (l + r) / 2;
            build(arr, 2 * node, l, mid);
            build(arr, 2 * node + 1, mid + 1, r);
            tree[node] = tree[2 * node] + tree[2 * node + 1];
        }
    }
    int query(int node, int l, int r, int ql, int qr) {
        if (ql > r || qr < l) return 0;
        if (ql <= l && r <= qr) return tree[node];
        int mid = (l + r) / 2;
        return query(2 * node, l, mid, ql, qr) + query(2 * node + 1, mid + 1, r, ql, qr);
    }
};

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    SegmentTree st(arr);
    cout << "Sum of range [1,3]: " << st.query(1, 0, arr.size() - 1, 1, 3) << endl;
    return 0;
}
