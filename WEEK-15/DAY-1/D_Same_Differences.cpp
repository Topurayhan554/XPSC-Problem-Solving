#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    map<ll, ll> mp;
    ll count = 0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        ll val = a[i] - (i + 1);
        count += mp[val];
        mp[val]++;
    }
    cout << count << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}