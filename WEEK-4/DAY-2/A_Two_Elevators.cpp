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
        int a, b, c;
        cin>>a>>b>>c;
        int time1 = abs(a - 1);
        int time2 = abs(b - c) + abs(c - 1);
        if(time1 < time2)
        {
            cout<<1<<endl;
        }
        else if(time1 > time2)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<3<<endl;
        }
    }
    return 0;
}