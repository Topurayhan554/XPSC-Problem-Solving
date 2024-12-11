#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        string s, t;
        cin>>s>>t;
        if(s == t)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int pos = -1;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')
            {
                pos = i;
                break;
            }
        }
        if(pos != -1)
        {
            bool flag = true;
            for(int i=0;i<n;i++)
            {
                if(s[i] != t[i])
                {
                    if(pos > i)
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if(flag)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}