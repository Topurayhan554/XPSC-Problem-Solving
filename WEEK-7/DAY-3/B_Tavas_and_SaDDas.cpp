#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    ll len = s.size();
    ll indx = 0;
    for(ll i=0;i<len;i++)
    {
        if(s[i] == '7')
        {
            indx += pow(2, len - i - 1);
        }
        else
        {
            indx += 0;
        }
        
    }
    ll sum = 0;
    for(ll i=0;i<len;i++)
    {
        sum += pow(2, i);
    }
    cout<<indx + sum<<endl;
    return 0;
}