#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
vector<int> adj[N];
long long leafs[N];
void DFS(int curr, int par)
{
    bool hasChild = false;
    leafs[curr] = 0;

    for (int child : adj[curr]) {
        if (child == par) continue;
        hasChild = true;
        DFS(child, curr);
        leafs[curr] += leafs[child];
    }
    if (!hasChild) leafs[curr] = 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            adj[i].clear();
            leafs[i] = 0;
        }
        for (int i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        DFS(1, -1);

        int q;
        cin >> q;
        while (q--) {
            int x, y;
            cin >> x >> y;
            cout << leafs[x] * leafs[y] << '\n';
        }
    }

    return 0;
}
