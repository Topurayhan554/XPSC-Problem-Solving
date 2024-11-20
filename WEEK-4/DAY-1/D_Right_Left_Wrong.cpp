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
        long long n;
        cin>>n;
        vector<long long> a(n+10);
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        string s;
        cin>>s;

        for(ll i=1;i<=n;i++)
        {
            a[i] = a[i] + a[i - 1];
        }
        ll l = n;
        long long ans = 0;
        for(ll i=0;i<n;i++)
        {
            if(s[i] == 'L')
            {
                ll flag = 0;
                for(ll j = l - 1;j > i;j--)
                {
                    if(s[j] == 'R')
                    {
                        l = j;
                        flag = 1;
                        break;
                    }
                }
                if(flag == 1)
                {
                    ans += a[l + 1] - a[i];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}