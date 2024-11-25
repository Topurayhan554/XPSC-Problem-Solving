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
        int XOR = 0;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            XOR ^= a[i];
        }
        sort(a.begin(), a.end());
        int ans = XOR;
        for(int i=0;i<n;i++)
        {
            int cur_XOR = (XOR ^ a[i]);
            ans = min(ans, cur_XOR);
        }
        cout<<ans<<endl;
        
    }
    return 0;
}