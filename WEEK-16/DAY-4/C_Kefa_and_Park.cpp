#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;
vector<int> tree[MAX_N]; // Tree as adjacency list
int cats[MAX_N];         // Store if a node has a cat or not
int n, m, result = 0;

void dfs(int node, int parent, int cat_count) {
    if (cats[node]) {
        cat_count++; // If this node has a cat, increase the count
    } else {
        cat_count = 0; // Reset if no cat
    }

    // If cat_count exceeds the allowed limit, stop here
    if (cat_count > m) return;

    // Check if the current node is a leaf (except root)
    bool isLeaf = true;
    for (int child : tree[node]) {
        if (child != parent) {
            isLeaf = false;
            dfs(child, node, cat_count);
        }
    }

    // If it's a leaf, count it
    if (isLeaf) result++;
}

int main() {
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> cats[i]; // Read if node i has a cat
    }

    // Read the tree edges
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    // Start DFS from node 1 (root) with cat_count = 0
    dfs(1, -1, 0);

    cout << result << endl; // Output the number of valid restaurants
    return 0;
}
