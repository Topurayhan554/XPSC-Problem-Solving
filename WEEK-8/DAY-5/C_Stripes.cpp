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
        string s = "";
        getline(cin, s);
        int n = 8;
        char grid[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>grid[i][j];
            }
        }
        int maxR = INT_MIN;
        int maxB = INT_MIN;
        for(int i=0;i<n;i++)
        {
            int countR = 0;
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == 'R')
                {
                    countR++;
                }
            }
            maxR = max(maxR, countR);
        }
        for(int i=0;i<n;i++)
        {
            int countB = 0;
            for(int j=0;j<n;j++)
            {
                if(grid[j][i] == 'B')
                {
                    countB++;
                }
            }
            maxB = max(maxB, countB);
        }
        if(maxB > maxR)
        {
            cout<<"B"<<endl;
        }
        else
        {
            cout<<"R"<<endl;
        }

    }
    return 0;
}