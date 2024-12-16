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
        vector<int> a(n), b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int mx = 0;
        map<int, int> mp;
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i] < b[i])
            {
                ans = 1;
            }
            else
            {
                if(b[i] == 0)
                {
                    mx = max(mx, a[i]);
                }
                else
                {
                    int dif = a[i] -b[i];
                    mp[dif]++;
                }
            }
        }
        int x = -1;
        for(auto it : mp)
        {
            x = it.first;
        }
        if(mp.size() > 1)
        {
            ans = 1;
        }
        if(x != -1 && mx > x)
        {
            ans = 1;
        }
        if(ans == 1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}