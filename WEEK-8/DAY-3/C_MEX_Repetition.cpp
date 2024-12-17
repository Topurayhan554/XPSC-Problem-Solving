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
        int b, first, last;
        vector<int> v, t;
        for(int i=0;i<n;i++)
        {
            cin>>b;
            v.push_back(b);
        }
        t = v;
        sort(t.begin(), t.end());
        first = n;
        for(int i=0;i<n;i++)
        {
            if(t[i] != i)
            {
                first = i;
                break;
            }
        }
        int bk;
        for(int i=0;i<n;i++)
        {
            bk = v[i];
            v[i] = first;
            first = bk;
        }
        v.push_back(first);
        last = (k - 1) % (n + 1);
        for(int i=(n+1-last); i<(n+1);i++)
        {
            cout<<v[i]<<" ";
        }
        for(int i=0;i<(n-last);i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}