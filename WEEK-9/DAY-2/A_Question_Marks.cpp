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
        string s;
        cin>>s;
        vector<int> a(4);
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '?')
            {
                continue;
            }
            a[s[i] - 'A']++;
        }
        int ans = 0;
        for(int i=0;i<4;i++)
        {
            ans += min(a[i], n);
        }
        cout<<ans<<endl;
    }
    return 0;
}