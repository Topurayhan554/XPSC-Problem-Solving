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
        ll cost = 0, diff = 0;
        for(ll i=1;i<n;i++)
        {
            if(a[i] < a[i-1])
            {
                cost += a[i-1] - a[i];
                diff = max(diff, a[i-1] - a[i]);
                a[i] = a[i - 1];
            }
        }
        cost += diff;
        cout << cost << endl;
    }
    return 0;
}