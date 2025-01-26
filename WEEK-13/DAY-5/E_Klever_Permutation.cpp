#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, k;
    cin>>n>>k;
    ll step = n/k;
    ll ext = n%k;
    ll pos = (ext + 1) / 2;
    ll neg = ext - pos;
    ll ans[n + 3];
    ll h = 1;
    for(ll i=1;i<=k;i+=2)
    {
        ans[i] = h;
        h += step + (pos > 0);
        pos--;
    }
    // h--;
    for(int i=2;i<=k;i+=2)
    {
        h += step + (neg > 0);
        ans[i] = h;
        neg--;
    }
    for(ll i=k+1;i<=n;i++)
    {
        if(i % 2 == 1)
        {
            ans[i] = ans[i - k] + 1;
        }
        else
        {
            ans[i] = ans[i - k] - 1;
        }
    }
    for(ll i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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