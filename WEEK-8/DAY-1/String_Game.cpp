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
        string s;
        cin>>n>>s;
        int one_count = 0, zero_count = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')
            {
                one_count++;
            }
            else
            {
                zero_count++;
            }

        }
        int min_wins = min(zero_count, one_count);
        if(min_wins % 2 == 1)
        {
            cout<<"Zlatan"<<endl;
        }
        else
        {
            cout<<"Ramos"<<endl;
        }
    }

    return 0;
}