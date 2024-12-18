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
        vector<ll> a(n+10);
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll mn = a[1], indx = n+1;
        vector<ll> v;
        v.push_back(a[1]);
        for(ll i=2;i<=n;i++)
        {
            if(mn <= a[i])
            {
                mn = a[i];
                v.push_back(a[i]);
            }
            else
            {
                indx = i;
                break;
            }
        }
        vector<ll> ans;
        for(ll i=indx;i<=n;i++)
        {
            ans.push_back(a[i]);
        }
        for(ll i=0;i<v.size();i++)
        {
            ans.push_back(v[i]);
        }
        if(is_sorted(ans.begin(), ans.end()))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}