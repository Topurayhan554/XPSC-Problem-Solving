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
        ll XOR = 0;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            XOR ^= a[i];
        }
        if(n % 2 == 0)
        {
            if(XOR == 0)
            {
                cout<<7<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else
        {
            cout<<XOR<<endl;
        }
    }
    return 0;
}