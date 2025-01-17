#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a.begin(), a.end());
    if(n == 1)
    {
        cout<<n<<endl;
        return;
    }
    ll gcd = a[n-1] - a[n-2];
    for(ll i = n-3;i>=0;i--)
    {
        gcd = __gcd(gcd, a[n-1] - a[i]);
    }
    ll ans = 0;
    for(ll i=0;i<n;i++)
    {
        ans += (a[n-1] - a[i]) / gcd;
    }
    ll cur = a[n-1];
    while(mp.find(cur) != mp.end())
    {
        cur -= gcd;
    }
    ans += (a[n-1] - cur) / gcd;
    cout<<ans<<endl;
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