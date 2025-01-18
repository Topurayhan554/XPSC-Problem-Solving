#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a;
    ll x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    if(a[0] != a[1])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        bool flag = 0;
        for(int i=1;i<n;i++)
        {
            if(a[i]%a[0] != 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
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