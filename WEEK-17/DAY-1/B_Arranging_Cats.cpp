#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s, f;
    cin >> s >> f;

    int add = 0, remove = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1' && f[i] == '0') remove++; // অতিরিক্ত বিড়াল সরাতে হবে
        if (s[i] == '0' && f[i] == '1') add++;    // নতুন বিড়াল বসাতে হবে
    }

    cout << max(add, remove) << '\n'; // ন্যূনতম অপারেশন
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
