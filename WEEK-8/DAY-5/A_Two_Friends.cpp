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
        vector<int> a(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        bool found = false;
        for(int i=1;i<=n;i++)
        {
            if(a[a[i]] == i)
            {
                found = true;
                break;
            }
        }
        if(found)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<3<<endl;
        }
    }
    return 0;
}