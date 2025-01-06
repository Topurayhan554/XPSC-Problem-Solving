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
        long long sum = 0;
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x == 1)
            {
                cnt++;
            }
            sum += x;
            a.push_back(x);
        }
        if(sum - n >= cnt && n != 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}