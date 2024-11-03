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
        string s;
        cin>>s;
        int frq[26] = {0};
        for(char c : s)
        {
            frq[c - 'a']++;
        }
        int odd_count = 0;
        for(int i=0;i<26;i++)
        {
            if(frq[i]%2 != 0)
            {
                odd_count++;
            }
        }
        int remining_length = n - k;
        if(remining_length < 0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(remining_length % 2 == 0)
        {
            if(odd_count == 0 || odd_count <= k)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            if(odd_count <= k + 1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}