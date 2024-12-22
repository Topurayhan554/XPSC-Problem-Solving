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
        ll G1 = 0, G2 = 0;
        for(ll i=0;i<n;i +=2)
        {
            G1 = __gcd(G1, a[i]);
        }
        for(ll i=1;i<n;i+=2)
        {
            G2 = __gcd(G2, a[i]);
        }
        ll ans = 0;
        bool ok = true;
        for(ll i=1;i<n;i+=2)
        {
            if(a[i] % G1 == 0)
            {
                ok = false;
            }
        }
        if(ok)
        {
            ans = G1;
        }
        else
        {
            ok = true;
            for(ll i=0;i<n;i+=2)
            {
                if(a[i]%G2 == 0)
                {
                    ok = false;
                }
            }
            if(ok)
            {
                ans = G2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}