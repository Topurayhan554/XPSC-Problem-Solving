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
        string s = " ";
        for(int i=0;i<n;i++)
        {
            s += "BAN";
        }
        n = s.size() - 1;
        int l = 2, r = n;
        vector<pair<int, int>> v;
        while(l < r)
        {
            v.push_back({l, r});
            swap(s[l], s[r]);
            l += 3;
            r -= 3;
        }
        cout<<v.size()<<endl;
        for(auto val : v)
        {
            cout<<val.first<<" "<<val.second<<endl;
        }
    }
    return 0;
}