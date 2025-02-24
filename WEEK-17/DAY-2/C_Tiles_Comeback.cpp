#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll first_color = v[0], last_color = v[n - 1];
    ll first_count = 0, last_count = 0;
    ll first_pos = -1;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] == first_color) first_count++;
        if (first_count == k) {
            first_pos = i;
            break;
        }
    }

    if (first_pos == -1) {
        cout << "NO\n";
        return;
    }
    if (first_color == last_color) {
        cout << "YES\n";
        return;
    }
    for (ll i = first_pos + 1; i < n; i++) {
        if (v[i] == last_color) last_count++;
        if (last_count == k) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
