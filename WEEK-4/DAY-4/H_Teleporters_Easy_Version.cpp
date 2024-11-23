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
        int n, c;
        cin>>n>>c;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            a[i] += i + 1;
        }
        sort(a.begin(), a.end());
        int i;
        for(i=0;i<n;i++)
        {
            if(c >= a[i])
            {
                c -= a[i];
            }
            else
            {
                break;
            }
            
        }
        cout<<i<<endl;

    }
    return 0;
}