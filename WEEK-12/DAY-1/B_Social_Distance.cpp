#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n > m)
    {
        cout<<"NO"<<endl;
        return;
    }
    sort(a.begin(), a.end(), greater<int>());
    a[0] = a[0] * 2;
    ll sum = 0;
    for(int i=0;i<n-1;i++)
    {
        sum += a[i] + 1;
    }
    sum += 1;
    if(sum > m)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
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
 
