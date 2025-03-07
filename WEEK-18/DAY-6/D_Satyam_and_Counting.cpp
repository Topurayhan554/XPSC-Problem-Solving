#include <bits/stdc++.h>
#define ll long long
using namespace std;
int solve()
{
    int n,x,y;
    cin>>n;
    map<int,int> m0;
    map<int,int> m1;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(y==0){
            m0[x]++;
        }
        else{
            m1[x]++;
        }
    }
    long long ans=0;
    for(auto temp:m0){
        if (m1.count(temp.first) > 0)
        {
            ans+=(long long)n-2;
        }
    }
    for(auto temp:m0){
        int x1=temp.first-1;
        int x2=temp.first+1;
        if(m1.find(x1) != m1.end() && m1.find(x2) != m1.end()){
            ans++;
        }
    }

    for (auto temp : m1)
    {
        int x1 = temp.first - 1;
        int x2 = temp.first + 1;
        if (m0.find(x1) != m0.end() && m0.find(x2) != m0.end())
        {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}