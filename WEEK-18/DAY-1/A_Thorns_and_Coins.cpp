#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int coins = n, ans = 0;
        for(int i=0;i<n-1;i++){
            if(s[i] == '*' && s[i] == s[i+1]){
                coins = i;
                break;
            }
        }
        
        for(int i=0;i<=coins;i++){

            if(s[i] == '@'){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}