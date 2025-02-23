#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int mx = 0;
    for(int i=1;i<n;i++)
    {
        int dif = a[i] - a[i-1];
        mx = max(mx, dif);
    }
    mx = max(mx, a[0] - 0);
    mx = max(mx, 2 * (x - a[n-1]));
    cout << mx << endl;
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