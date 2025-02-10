#include <bits/stdc++.h>
using namespace std;
bool is_vowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin>>s>>t;
    if(s.length() != t.length())
    {
        cout << "No" << endl;
        return 0;
    }
    for(int i=0;i<s.length();i++)
    {
        if(is_vowel(s[i]) != is_vowel(t[i]))
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}