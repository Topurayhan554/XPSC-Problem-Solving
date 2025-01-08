#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(is_sorted(a.begin(),a.end()))
    {
        cout<<"YES"<<endl;
        return;
    }
    int last = 0;
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        int p = a[i] / 10;
        int q = a[i] % 10;
        
        if(p >= last && q >= p)
        {
            last = q;
            ans.push_back(p);
            ans.push_back(q);
        }
        else
        {
            ans.push_back(a[i]);
            last = a[i];
        }
    }
    if(is_sorted(ans.begin(), ans.end()))
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