#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    char s[n+1];
    cin>>s;
    int is_valid = 1;
    int found = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 's')
        {
            if(found)
            {
                is_valid = 0;
                break;
            }
        }
        else if(s[i] == 'p')
        {
            found = 1;
        }
    }
    if(is_valid)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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