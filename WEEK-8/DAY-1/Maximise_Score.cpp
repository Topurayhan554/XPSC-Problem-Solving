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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> dif(n-1);
        for(int i=0;i<n-1;i++)
        {
            dif[i] = abs(a[i] - a[i+1]);
        }
        int max_score = INT_MAX;
        if(n >= 2)
        {
            max_score = min(max_score, dif[0]);
        }
        if(n >= 2)
        {
            max_score = min(max_score, dif[n-2]);
        }
        for(int i=1;i<n-1;i++)
        {
            int max_dif = max(dif[i-1], dif[i]);
            max_score = min(max_score, max_dif);
        }
        cout<<max_score<<endl;
    }
    return 0;
}