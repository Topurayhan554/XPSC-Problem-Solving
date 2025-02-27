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
        int n, k;
        cin>>n>>k;
        if(n == 1){
            cout << 1 << endl << 1 << endl;
        }
        else if(k == 1 || k == n){
            
            cout << -1 << endl;
        }
        else
        {
            int p1 = k-1;
            int p2 = k+1;
            if(p1 % 2 == 0){

                p1--;
                p2--;
            }
            cout << 3 << endl;
            cout << 1 << " " << p1+1 << " " << p2 << endl;
        }
    }
    return 0;
}