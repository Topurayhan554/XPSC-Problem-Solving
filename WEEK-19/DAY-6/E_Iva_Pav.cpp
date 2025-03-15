#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define MAXN 200005
#define LOG 20

int st[MAXN][LOG]; // Sparse table
int lg[MAXN]; // Log values for quick lookup

void buildSparseTable(vector<int>& a, int n) {
    for (int i = 1; i <= n; i++) {
        st[i][0] = a[i];
    }

    for (int j = 1; (1 << j) <= n; j++) {
        for (int i = 1; i + (1 << j) - 1 <= n; i++) {
            st[i][j] = st[i][j - 1] & st[i + (1 << (j - 1))][j - 1];
        }
    }

    // Precompute logarithm values
    for (int i = 2; i <= n; i++) {
        lg[i] = lg[i / 2] + 1;
    }
}

// Range AND Query using Sparse Table
int queryAND(int L, int R) {
    int j = lg[R - L + 1];
    return st[L][j] & st[R - (1 << j) + 1][j];
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    buildSparseTable(a, n);

    int q;
    cin >> q;

    while (q--) {
        int l, k;
        cin >> l >> k;

        int lo = l, hi = n, ans = -1;

        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (queryAND(l, mid) >= k) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        cout << ans << " ";
    }
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
