#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    string s;
    cin>>n>>s;
    n = s.length();
    int flag = 0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i] == s[n - i - 1])
        {
            continue;
        }
        if(s[i] > s[n - i - 1])
        {
            flag = 1;
        }
        else
        {
            break;
        }
    }
    string rev = s;
    reverse(rev.begin(), rev.end());
    if(flag == 0)
    {
        cout<<s<<endl;
    }
    else
    {
        cout<<rev<<s<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}