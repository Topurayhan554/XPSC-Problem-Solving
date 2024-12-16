#include <bits/stdc++.h>
using namespace std;
const int N = 1e9+5;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int ans = N;
        for(int i='a';i<='z';i++)
        {
            int change = 0;
            int l = 0, r = n-1;
            while(l <= r)
            {
                if(s[r] != s[l])
                {
                    if(s[l] == i)
                    {
                        l++;
                        change++;
                    }
                    else if(s[r] == i)
                    {
                        r--;
                        change++;
                    }
                    else
                    {
                        change = N;
                        break;
                    }
                }
                else
                {
                    l++;
                    r--;
                }
            }
            ans = min(ans, change);
        }
        if(ans == N)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}