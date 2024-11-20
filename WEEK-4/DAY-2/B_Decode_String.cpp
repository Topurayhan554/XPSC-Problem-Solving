// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         string ans;
//         for(int i=n-1;i>=0;i--)
//         {
//             if(i < 2 || s[i] != '0')
//             {
//                 ans += (s[i] - '0' - 1 + 'a');
//             }
//             else
//             {
//                 string num;
//                 num += s[i-2];
//                 num += s[i-1];
//                 int x = stoi(num);
//                 i = i-2;
//                 ans+= ('a' + x - 1);
//             }
//         }
//         reverse(ans.begin(), ans.end());
//         cout<<ans<<endl;
//     }
//     return 0;
// }
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
        string s;
        cin>>n>>s;
        string ans;
        for(int i=0;i<n;i++)
        {
            if(i + 2 < n && s[i + 2] == '0' && 
            (i + 3 >= n || s[i + 3] != '0'))
            {
                int num = ((s[i] - '0') * 10) + (s[i + 1] - '0');
                ans.push_back((char)(96 + num));
                i += 2;
            }
            else
            {
                int num = (s[i] - '0');
                ans.push_back((char)(96 + num));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}