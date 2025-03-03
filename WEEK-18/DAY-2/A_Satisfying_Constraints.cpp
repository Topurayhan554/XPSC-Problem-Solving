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
        int l = 0, r = INT_MAX;
        set<int> s;

        for(int i=0;i<n;i++){
            int a, x;
            cin>>a>>x;

            if(a == 1){
                l = max(l, x);
            }
            else if(a == 2){
                r = min(r, x);
            }
            else{
                s.insert(x);
            }
        }
        if(r < l){
            cout << 0 << endl;
            continue;
        }
        
        int ans = r - l + 1;
        for(auto val : s){
            ans -= (val >= l && val <= r);
        }
        cout << ans << endl;
    }
    return 0;
}