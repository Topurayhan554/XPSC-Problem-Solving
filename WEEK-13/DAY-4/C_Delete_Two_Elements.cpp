#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        ll target = 2 * sum;
        if (target % n != 0) {
            cout << 0 << endl;
            continue;
        }
        target /= n;
        map<ll, int> freq;
        ll count = 0;

        for (int i = 0; i < n; i++) {
            ll comp = target - a[i];
            if (freq.count(comp))
            {
                count += freq[comp];
            }
            freq[a[i]]++;
        }
        cout << count << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
