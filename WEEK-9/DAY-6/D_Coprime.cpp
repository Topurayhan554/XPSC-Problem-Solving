#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v(1001,0);
        int n;
        cin>>n;
        int mx=-1;
        for(int i=1;i<=n;i++){
            int temp;
            cin>>temp;
            v[temp]=i;
        }
        for(int i=1;i<=1000;i++)
        {
            for(int j=1;j<=1000;j++)
            {
                if(v[i] && v[j] && int(__gcd(i,j))==1)
                {
                    mx=max(mx,v[i]+v[j]);
                }
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}