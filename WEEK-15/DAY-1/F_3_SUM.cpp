#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> count(10, 0);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        count[x % 10]++;
    }
    for(int i=0;i<10;i++)
    {
        if(count[i] == 0) continue;
        count[i]--;
        for(int j=i;j<10;j++)
        {
            if(count[j] == 0) continue;
            count[j]--;

            for(int k=j;k<10;k++)
            {
                if(count[k] == 0) continue;
                if((i + j + k) % 10 == 3)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
            count[j]++;
        }
        count[i]++;
    }
    cout << "NO" << endl;
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