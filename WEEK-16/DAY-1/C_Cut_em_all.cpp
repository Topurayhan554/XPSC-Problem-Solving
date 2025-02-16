#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1e5 + 5;
vector<int> tree[MAX_N];
int sub_sz[MAX_N];
int cut_count = 0;
void dfs(int node, int parent)
{
    sub_sz[node] = 1;
    for(int child : tree[node])
    {
        if(child == parent)
            continue;
        dfs(child, node);
        sub_sz[node] += sub_sz[child];
        if(sub_sz[child] % 2 == 0)
        {
            cut_count++;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    if(n % 2 == 1)
    {
        cout << -1 << endl;
        return 0;
    }
    for(int i=0;i<n-1;i++)
    {
        int u, v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);

    }
    dfs(1, -1);
    cout << cut_count << endl;
    return 0;
}