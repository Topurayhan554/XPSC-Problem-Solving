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
        string s = "";
        for(int i=0;i<k;i++){
            s += char('a' + i);
        }
        
        string result;
        for(int i=0;i<n*k;i++){
            result += s[i % k];
        }
        cout << result << endl;
    }
    return 0;
}