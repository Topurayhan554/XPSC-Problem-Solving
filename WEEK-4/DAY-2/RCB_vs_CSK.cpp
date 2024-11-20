#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin>>x>>y;
    int sum = x - y;
    if(sum >= 18)
    {
        cout<<"RCB"<<endl;
    }
    else
    {
        cout<<"CSK"<<endl;
    }
    return 0;
}