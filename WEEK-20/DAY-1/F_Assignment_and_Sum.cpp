#include <bits/stdc++.h>
using namespace std;

#define int long long
const int N = 1e5 + 5;
int seg[4 * N], lazy[4 * N];

void update(int node, int start, int end, int l, int r, int val)
{
    if (lazy[node] != -1) {
        seg[node] = (end - start + 1) * lazy[node];
        if (start != end) { 
            lazy[2 * node] = lazy[node];
            lazy[2 * node + 1] = lazy[node];
        }
        lazy[node] = -1;
    }

    if (start > r || end < l) return;
    if (start >= l && end <= r)
    {
        seg[node] = (end - start + 1) * val;
        if (start != end) {
            lazy[2 * node] = val;
            lazy[2 * node + 1] = val;
        }
        return;
    }

    int mid = (start + end) / 2;
    update(2 * node, start, mid, l, r, val);
    update(2 * node + 1, mid + 1, end, l, r, val);
    seg[node] = seg[2 * node] + seg[2 * node + 1];
}

int query(int node, int start, int end, int l, int r)
{
    if (lazy[node] != -1) {
        seg[node] = (end - start + 1) * lazy[node];
        if (start != end) {
            lazy[2 * node] = lazy[node];
            lazy[2 * node + 1] = lazy[node];
        }
        lazy[node] = -1;
    }

    if (start > r || end < l) {
        return 0;
    }
    if (start >= l && end <= r) {
        return seg[node];
    }

    int mid = (start + end) / 2;
    return query(2 * node, start, mid, l, r) + query(2 * node + 1, mid + 1, end, l, r);
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    
    fill(seg, seg + 4 * n, 0);
    fill(lazy, lazy + 4 * n, -1);

    while (m--)
    {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r, v;
            cin >> l >> r >> v;
            update(1, 0, n - 1, l, r - 1, v);
        }
        else {
            int l, r;
            cin >> l >> r;
            cout << query(1, 0, n - 1, l, r - 1) << "\n";
        }
    }
    return 0;
}
