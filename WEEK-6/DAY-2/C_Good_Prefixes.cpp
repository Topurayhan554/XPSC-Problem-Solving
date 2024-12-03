#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll mx = 0, sum = 0, count = 0;
        for(int i=0;i<n;i++)
        {
            sum += a[i];
            mx = max(mx, a[i]);
            if(sum - mx == mx)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}