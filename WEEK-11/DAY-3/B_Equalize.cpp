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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        int mx = 1;
        for(int i=0;i<v.size();i++)
        {
            int ans = v[i] + n - 1;
            auto it = upper_bound(v.begin(), v.end(), ans) - v.begin() - i;
            mx = max(mx, it);
            
        }
        cout<<mx<<endl;
    }

}