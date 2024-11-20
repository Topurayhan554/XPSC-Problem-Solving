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
        int x, y;
        cin>>x>>y;
        int draw = 0;
        while(true)
        {
            if(x >= draw && y >= draw && (x - draw) % 3 == 0 
            && (y - draw) % 3 == 0)
            {
                break;
            }
            draw++;
        }
        cout<<draw<<endl;
    }
    return 0;
}