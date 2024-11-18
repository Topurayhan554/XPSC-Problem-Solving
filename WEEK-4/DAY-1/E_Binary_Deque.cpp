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
        long long s;
        cin>>n>>s;
        long long sum = 0;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum += a[i];
        }
        if(sum == s)
        {
            cout<<0<<endl;
        }
        else if(sum < s)
        {
            cout<<-1<<endl;
        }
        else
        {
            int cnt = 0;
            int ans = 0;
            int k;
            for(int i=0;i<n;i++)
            {
                ans += a[i];
                cnt++;
                if(ans == s)
                {
                    k = i + 1;
                    break;
                }
            }
            int mx = cnt;
            int indx = 0;
            for(int i = k;i < n;i++)
            {
                int j = i;
                while(j < n)
                {
                    if(a[j] == 1)
                    {
                        break;
                    }
                    cnt ++;
                    mx = max(mx, cnt);
                    j++;
                }
                i = j;
                ans++;
                while(indx < n)
                {
                    if(a[indx] == 1)
                    {
                        indx++;
                        break;
                    }
                    cnt--;
                    indx++;
                    mx = max(mx, cnt);
                }
            }
            cout<<n-mx<<endl;
        }
    }
    return 0;
}