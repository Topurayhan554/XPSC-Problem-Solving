#include <bits/stdc++.h>
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
    int ops = 0;
    for(int i=n-1;i>0;i--)
    {
        if(a[i] == 0)
        {
            cout<<-1<<endl;
            return;
        }
        while(a[i-1] > 0 && a[i] <= a[i-1])
        {
            a[i-1] /= 2;
            ops++;
        }
    }
    cout<<ops<<endl;
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