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
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int> orginal(n);
        for(int i=0;i<n;i++)
        {
            int bi;
            string moves;
            cin>>bi>>moves;
            int current_digit = v[i];
            for(char move : moves)
            {
                if(move == 'U')
                {
                    current_digit = (current_digit + 9) % 10;
                }
                else if(move == 'D')
                {
                    current_digit = (current_digit + 1) % 10;
                }
            }
            orginal[i] = current_digit;
        }
        for(int i=0;i<n;i++)
        {
            cout<<orginal[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}