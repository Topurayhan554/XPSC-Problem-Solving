#include <bits/stdc++.h>
using namespace std;
class FenwickTree {
public:
    FenwickTree(int size) : size(size) {
        tree.resize(size + 1, 0);
    }

    void add(int index, int value) {
        for (; index <= size; index += index & -index) {
            tree[index] += value;
        }
    }

    int sum(int index) {
        int result = 0;
        for (; index > 0; index -= index & -index) {
            result += tree[index];
        }
        return result;
    }

private:
    vector<int> tree;
    int size;
};

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
    unordered_map<int, int> compress;
    for (int i = 0; i < n; ++i) {
        compress[sorted_a[i]] = i + 1;
    }
    FenwickTree left_tree(n);
    vector<int> left_count(n);
    for (int j = 0; j < n; ++j) {
        int compressed_value = compress[a[j]];
        left_count[j] = left_tree.sum(n) - left_tree.sum(compressed_value);
        left_tree.add(compressed_value, 1);
    }
    FenwickTree right_tree(n);
    vector<int> right_count(n);
    for (int j = n - 1; j >= 0; --j) {
        int compressed_value = compress[a[j]];
        right_count[j] = right_tree.sum(compressed_value - 1);
        right_tree.add(compressed_value, 1);
    }
    long long total_triplets = 0;
    for (int j = 0; j < n; ++j) {
        total_triplets += (long long)left_count[j] * right_count[j];
    }

    cout << total_triplets << endl;
    return 0;
}