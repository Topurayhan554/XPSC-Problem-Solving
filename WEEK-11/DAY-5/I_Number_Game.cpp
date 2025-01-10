#include <bits/stdc++.h>
#define ll long long int
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

        auto ok = [&](int k)
        {
            multiset<int> s;
            for(auto i:a)
            {
                s.insert(i);
            }

            for(int i=1;i<=k;i++)
            {
                if(s.empty())
                    return false;
                int req=k-i+1;
                auto it=s.upper_bound(req);
                if(it==s.begin())
                    return false;
                it--;

                s.erase(it);
                if(!s.empty())
                {
                    it=s.begin();
                    ll v=(*it);
                    v+=(req);
                    s.erase(it);
                    s.insert(v);
                }
            }
            return true;
        };

        int l = 0, r = n, mid, ans;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(ok(mid))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
