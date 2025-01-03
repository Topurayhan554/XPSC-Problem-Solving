#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    sort(a.begin(), a.end());
    
    for(int i=0;i<q;i++)
    {
        int l, r;
        cin>>l>>r;
        int left = lower_bound(a.begin(), a.end(), l) - a.begin();
        int right = upper_bound(a.begin(), a.end(), r) - a.begin();
        cout<<right - left <<" ";
    }
    return 0;
}