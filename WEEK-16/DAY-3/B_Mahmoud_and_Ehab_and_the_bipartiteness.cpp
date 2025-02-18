#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX_N = 100000;
vector<int> tree[MAX_N + 1];
int color[MAX_N + 1];
ll countA = 0, countB = 0;

void dfs(int node, int col, int parent)
{
    color[node] = col;
    if (col == 0) countA++;
    else countB++;

    for (int child : tree[node]) {
        if (child != parent) {
            dfs(child, 1 - col, node);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1, 0, -1);

    ll maxEdges = countA * countB - (n - 1);
    cout << maxEdges << "\n";

    return 0;
}
