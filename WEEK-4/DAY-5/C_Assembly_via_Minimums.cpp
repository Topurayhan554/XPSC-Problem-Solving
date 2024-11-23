#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll m = (n * (n-1)) / 2;
        vector<ll> a(n), b(m);
        for(ll i=0;i<m;i++)
        {
            cin>>b[i];
        }
        sort(b.begin(), b.end());
        ll x = 1, index = 0;
        ll ans = n - x;
        while(n - x > 0)
        {
            a[index++] = b[ans - 1];
            x ++;
            ans += n - x;
        }
        a[n - 1] = 1e9 + 5;
        for(ll val : a)
        {
            cout<<val<<" ";
        }Topu5656&*)
        cout<<endl;
    }
    return 0;
}