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
        
        if(n != 5)
        {
            cout<<"NO"<<endl;
            continue;
        }
        sort(s.begin(), s.end());
        string target = "Timur";
        sort(target.begin(), target.end());
        if(s == target)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}