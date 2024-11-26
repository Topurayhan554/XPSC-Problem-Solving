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
        map<int, int> mp;
        vector<ll> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        int freq = 0;
        for(auto it : mp)
        {
            freq = max(freq, it.second);
        }
        int ans = 0;
        while(freq < n)
        {
            ans ++;
            if(n - freq >= freq)
            {
                ans += freq;
                freq *= 2;
            }
            else
            {
                ans += n - freq;
                freq = n;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}