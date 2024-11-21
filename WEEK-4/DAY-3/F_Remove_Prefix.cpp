#include <bits/stdc++.h>
#define ll long long
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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        set<int> s;
        for(int i=n-1;i>=0;i--)
        {
            if(s.find(a[i]) != s.end())
            {
                break;
            }
            else
            {
                s.insert(a[i]);
            }

        }
        cout<<n-s.size()<<endl;
    }
    return 0;
}