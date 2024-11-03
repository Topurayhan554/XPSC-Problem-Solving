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
        int sum = a + b;
        int min = a - b;
        if(sum == c)
        {
            cout<<"+"<<endl;
        }
        else
        {
            cout<<"-"<<endl;
        }
    }
    return 0;
}