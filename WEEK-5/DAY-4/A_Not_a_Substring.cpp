#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    int n = s.length();
    if(s == "()")
    {
        cout<<"NO"<<endl;
        return;
    }
    int flag = 0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i] == '(' && s[i+1] == '(' ||
         s[i] == ')' && s[i+1 == ')'])
        {
            flag = 1;
        }
    }
    string ans = "";
    if(flag == 1)
    {
        for(int i=0;i<n;i++)
        {
            ans += "()";
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            ans += '(';
        }
        for(int i=0;i<n;i++)
        {
            ans += ')';
        }
    }
    cout<<"YES"<<endl;
    cout<<ans<<endl;
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