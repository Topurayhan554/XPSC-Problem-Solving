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
        ll a, b, n;
        cin>>a>>b>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll sum = 0;
        if(b >= a)
        {
            sum = a;
            b = a;
        }
        else
        {
            sum = b;
        }
        for(ll i=0;i<n;i++)
        {
            if(v[i] + 1 <= a)
            {
                sum += v[i];
            }
            else
            {
                sum += a - 1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}