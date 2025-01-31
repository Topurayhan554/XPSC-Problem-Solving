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
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'b' || s[i] == 'c' || s[i] == 'd')
            {
                cout << s[i];
            }
            else
            {
                cout << s[i];
                if(s[i+1] == 'b' || s[i+1] == 'c' || s[i+1] == 'd')
                {
                    if(s[i+2] != 'a' && s[i+2] != 'e'){
                        cout << s[i+1];
                        i += 1;
                    }
                }
                if(i != n-1)
                {
                    cout << ".";
                }
            }
            
        }
        cout << endl;
    }
    return 0;
}