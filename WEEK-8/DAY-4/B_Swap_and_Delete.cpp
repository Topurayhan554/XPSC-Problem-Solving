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
        string s;
        cin>>s;
        int one = 0, zero = 0;
        int length = s.size();
        for(int i=0;i<length;i++)
        {
            if(s[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        for(int i=0;i<length;i++)
        {
            if(s[i] == '1')
            {
                if(zero > 0)
                {
                    zero--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(one > 0)
                {
                    one--;
                }
                else
                {
                    break;
                }
            }
        }
        cout<<one+zero<<endl;
    }
    return 0;
}