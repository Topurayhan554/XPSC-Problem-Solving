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
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<char, int> mp;
        for(char i='a';i<='z';i++)
        {
            mp[i] = 0;
        }
        for(int ch : a)
        {
            for(char i='a';i<='z';i++)
            {
                if(mp[i] == ch)
                {
                    cout<<i;
                    mp[i]++;
                    break;
                }

            }
        }
        cout<<endl;
    }
    return 0;
}