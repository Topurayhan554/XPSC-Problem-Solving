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
        int n, k;
        cin>>n>>k;
        int count = 0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x == count + 1)
            {
                count++;
            }
        }
        int ans = (n - count + k - 1) / k;
        cout<<ans<<endl;
    }
    return 0;
}