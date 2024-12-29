#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a, b;
        cin>>a>>b;
        if(b != 1)
        {
            cout<<"YES"<<endl<<a*b<<" "<<a<<" "<<(a*b) + a<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}