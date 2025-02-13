#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int b = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'B'){
                b++;
            }
        }
        vector<int> ans, v;
        if(b == k){
            cout << 0 << endl;
        }
        else if(b < k)
        {
            int count = 0;
            for(int i=0;i<n;i++)
            {
                if(s[i] == 'A'){
                    count++;
                }
                if(count == k-b)
                {
                    cout << 1 << endl;
                    cout << i + 1 << " " << "B\n";
                    break;
                }
            }
        }
        else{
            int count = 0;
            for(int i=0;i<n;i++)
            {
                if(s[i] == 'B')
                {
                    count++;
                }
                if(count == b-k){
                    cout << 1 << endl;
                    cout << i + 1 << " " << "A" << endl;
                    break;
                }
            }
        }

    }
    return 0;
}