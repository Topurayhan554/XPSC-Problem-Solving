#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        sort(a.begin(), a.end());
        bool turtle = true, piggy = false;
        while(a.size() > 1)
        {
            if(turtle)
            {
                auto it = a.begin();
                a.erase(it);
                turtle = false;
                piggy = true;
            }
            else if(piggy)
            {
                auto it = a.end();
                a.erase(it);
                turtle = true;
                piggy = false;
            }
        }
        cout<<a[0]<<endl;
    }
    return 0;
}