#include <bits/stdc++.h>
using namespace std;
bool can_defet_dragon(int x, int n, int m)
{
    while(n > 0 && x > 20){
        x = x/2 + 10;
        n--;
    }
    x -= m*10;
    return x<=0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int x, n, m;
        cin>>x>>n>>m;
        if(can_defet_dragon(x, n, m)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}