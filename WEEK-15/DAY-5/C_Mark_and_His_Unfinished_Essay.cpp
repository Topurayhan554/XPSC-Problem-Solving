#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;

    vector<pair<int, int>> ops;
    vector<int> len;
    len.push_back(n);
    for (int i = 0; i < c; i++) {
        int l, r;
        cin >> l >> r;
        ops.push_back({l - 1, r - 1});
        len.push_back(len.back() + (r - l + 1));
    }
    while (q--) {
        int k;
        cin >> k;
        k--;
        for (int i = c - 1; i >= 0; i--) {
            int start = ops[i].first, end = ops[i].second;
            int prev_len = len[i];
            if (k >= prev_len) {
                k = start + (k - prev_len);
            }
        }
        cout << s[k] << endl;
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
