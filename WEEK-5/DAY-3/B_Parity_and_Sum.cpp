#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<ll> odd;
    vector<ll> even;
    for(auto i : a)
    {
        if(i % 2 != 0)
        {
            odd.push_back(i);
        }
        else
        {
            even.push_back(i);
        }
    }
    if(odd.size() == 0 || even.size() == 0)
    {
        cout<<0<<endl;
        return;
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    ll mx = odd.back();
    ll ans = even.size();
    for(auto val : even)
    {
        if(val > mx)
        {
            ans++;
            break;
        }
        mx += val;
    }
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}