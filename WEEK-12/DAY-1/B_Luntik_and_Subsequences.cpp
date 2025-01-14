#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    int one_count = 0, zero_count = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 0) zero_count++;
        if (a[i] == 1) one_count++;
    }

    // Calculate 2^zero_count % MOD
    long long powerOfTwo = 1;
    for (int i = 0; i < zero_count; ++i) {
        powerOfTwo = (powerOfTwo * 2) % MOD;
    }

    // Calculate result
    long long result = (one_count * powerOfTwo) % MOD;
    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
