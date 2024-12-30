#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll count = 0;
    int start = 0;
    map<int, int> mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
        while(mp.size() > k)
        {
            mp[a[start]]--;
            if(mp[a[start]] == 0)
            {
                mp.erase(a[start]);
            }
            start++;
        }
        count += (i - start + 1); 
    }
    cout<<count<<endl;
    return 0;
}