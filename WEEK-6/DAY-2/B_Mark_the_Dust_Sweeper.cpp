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
        ll first_pos = -1;
        for(ll i=0;i<n;i++)
        {
            if(first_pos == - 1 && a[i] > 0)
            {
                first_pos = i;
            }
        }
        ll ans = 0;
        if(first_pos == -1 || first_pos == n-1)
        {
            cout<<0<<endl;
            continue;
        }
        for(ll i=first_pos;i<n-1;i++)
        {
            ans+=a[i];
            if(a[i] == 0)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}