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
        long long int a[n];
        map<int, int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] != 0)
            {
                mp[a[i]]++;
            }
        }
        if(mp.size() == 1 || mp.size() == 0)
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