#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string sz = to_string(n);
    while(sz.length() < 4)
    {
        sz = '0' + sz;
    }
    cout<<sz<<endl;
    return 0;
}
