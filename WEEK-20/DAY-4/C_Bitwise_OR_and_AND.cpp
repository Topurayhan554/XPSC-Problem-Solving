#include <bits/stdc++.h>
using namespace std;

const int max_N = 100000;
vector<int> t(4 * max_N, 0);
vector<int> lazy(4 * max_N, 0);
int n, m;

void solve(int node, int start, int end)
{
    if (lazy[node] != 0) {
        t[node] |= lazy[node];
        if (start != end) {
            lazy[node * 2] |= lazy[node];
            lazy[node * 2 + 1] |= lazy[node];
        }
        lazy[node] = 0;
    }
}

void update(int node, int start, int end, int l, int r, int v)
{
    solve(node, start, end);
    
    if (start > r || end < l) return;

    if (start >= l && end <= r) {
        lazy[node] |= v;
        solve(node, start, end);
        return;
    }

    int mid = (start + end) / 2;
    update(node * 2, start, mid, l, r, v);
    update(node * 2 + 1, mid + 1, end, l, r, v);
    t[node] = t[node * 2] & t[node * 2 + 1];
}

int query(int node, int start, int end, int l, int r)
{
    solve(node, start, end);

    if (start > r || end < l) return (1LL << 30) - 1;

    if (start >= l && end <= r) return t[node];

    int mid = (start + end) / 2;
    return query(node * 2, start, mid, l, r) & query(node * 2 + 1, mid + 1, end, l, r);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    while (m--)
    {
        int type, l, r, v;
        cin >> type >> l >> r;
        if (type == 1) {
            cin >> v;
            update(1, 0, n - 1, l, r - 1, v);
        }
        else {
            cout << query(1, 0, n - 1, l, r - 1) << endl;
        }
    }

    return 0;
}
