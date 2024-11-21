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
        ll n, m, h;
        cin>>n>>m>>h;
        vector<ll> a(n), b(m);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<m;i++)
        {
            cin>>b[i];
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        ll total_energy = 0;
        ll min_count = min(n, m);
        for(ll i=0;i<min_count;i++)
        {
            ll energy = b[i] * h;
            total_energy += min(energy, a[i]);
        }
        cout<<total_energy<<endl;
    }
    return 0;
}