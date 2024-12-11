#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> a(m+1);
    for(int i=0;i<=m;i++)
    {
        cin>>a[i];
    }
    int fedom_army = a[m];
    int count = 0;
    for(int i=0;i<m;i++)
    {
        int dif = fedom_army ^ a[i];
        int ans = __lg(dif);
        if(ans <= k)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}