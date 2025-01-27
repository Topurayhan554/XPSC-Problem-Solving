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
        int total_Xor = 0;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            total_Xor ^= a[i];
        }

        if(total_Xor == 0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int cur_XOR = 0;
        int spilt_count = 0;
        for(int i=0;i<n;i++)
        {
            cur_XOR ^= a[i];
            if(cur_XOR == total_Xor)
            {
                spilt_count++;
                cur_XOR = 0;
            }
        }
        if(spilt_count >= 2)
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