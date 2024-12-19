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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(is_sorted(a, a+n))
        {
            cout<<0<<endl;
        }
        else
        {
            int count = 0;
            for(int i=0;i<n;i++)
            {
                int tmp = abs(a[i] - (i+1));
                if(tmp % k)
                {
                    count++;
                }
            }
            if(count > 2)
            {
                cout<<-1<<endl;
            }
            else if(count == 2)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
    }
    return 0;
}