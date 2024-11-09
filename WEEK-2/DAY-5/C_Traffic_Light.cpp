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
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        if(c == 'g')
        {
            cout<<0<<endl;
            continue;
        }
        vector<int> green;
        s += s;
        for(int i=0;i<n*2;i++)
        {
            if(s[i] == 'g')
            {
                green.push_back(i);
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == c)
            {
                auto it = lower_bound(green.begin(), green.end(),i) - green.begin();
                ans = max(ans, green[it] - i);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}