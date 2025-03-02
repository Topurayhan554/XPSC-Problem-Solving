#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        int start = n - k + 1;
        int end = n;

        int odd_count = (end + 1) / 2 - (start / 2);

        if(odd_count % 2 == 0)
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}