#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, z;
    cin>>x>>y>>z;
    double cur_points = x + (0.5 * y);
    int rem_game = 4 - (x + y + z);
    double max_points = cur_points + rem_game;
    if(max_points > 2)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}