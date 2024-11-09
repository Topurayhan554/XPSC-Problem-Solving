#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n + 5];
        map<int, int> mp;
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
            mp[ar[i]] ++;
        }
        sort(ar+1,ar+n+1);
        int ans = 0;
        for(int i=1;i<=n;i++)
        {
            int val = ar[i];
            if(mp[ar[i]] != 0)
            {
                ans++;
                while(mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}