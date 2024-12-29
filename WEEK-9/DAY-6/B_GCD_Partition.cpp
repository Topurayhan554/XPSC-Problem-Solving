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
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll total_sum = 0;
        for(ll i=0;i<n;i++)
        {
            total_sum += a[i];
        }
        ll mx_gcd = 0;
        ll prefix_sum = 0;
        for(ll i=0;i<n-1;i++)
        {
            prefix_sum += a[i];
            ll rem_sum = total_sum - prefix_sum;
            ll ans = __gcd(prefix_sum, rem_sum);
            mx_gcd = max(mx_gcd, ans);
        }
        cout<<mx_gcd<<endl;
        
    }
    return 0;
}