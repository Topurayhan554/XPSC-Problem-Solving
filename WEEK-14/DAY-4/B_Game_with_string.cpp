#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    stack<char> st;
    int moves = 0;
    for(char c : s)
    {
        if(!st.empty() && st.top() == c)
        {
            st.pop();
            moves++;
        }
        else
        {
            st.push(c);
        }
    }
    if(moves % 2 == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}