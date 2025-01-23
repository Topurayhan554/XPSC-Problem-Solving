#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string a, b;
        cin>>a>>b;
        int mx = 0;
        int j = 0;
        for(int i=0;i<n;i++)
        {
            while(j < m && b[j] != a[i])
            {
                j++;
            }
            if(j < m)
            {
                mx = i+1;
                j++;
            }
            else
            {
                break;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}