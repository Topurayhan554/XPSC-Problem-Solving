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
        vector<int> a(n);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        bool flag = false;
        for(int i=1;i<=n;i++)
        {
            if(a[1] != a[i])
            {
                flag = true;
                break;
            }
        }
        if(flag){
            int city = -1;
            cout << "YES" << endl;
            for(int i=2;i<=n;i++){
                if(a[1] != a[i]){
                    cout << 1 << " " << i << endl;
                    city = i;
                }
                
            }
            for(int i=2;i<=n;i++)
            {
                if(a[i] == a[1])
                {
                    cout << city << " " << i << endl;
                }
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}