#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    
    vector<string> strings(n);
    unordered_set<string> set;
    
    for (int i = 0; i < n; i++)
    {
        cin >> strings[i];
        set.insert(strings[i]);
    }
    
    vector<string> leftHalf;
    string center;
    
    for (const string& s : strings)
    {
        string reversed = s;
        reverse(reversed.begin(), reversed.end());

        if (set.count(reversed) && reversed != s)
        {
            leftHalf.push_back(s);
            set.erase(s);
            set.erase(reversed);
        }
        else if (s == reversed)
        {

            if (center.empty())
            {
                center = s;
            }
        }
    }
    
    string left = "";
    for (const string& s : leftHalf)
    {
        left += s;
    }
    
    string right = left;
    reverse(right.begin(), right.end());
    
    string palindrome = left + center + right;
    
    cout << palindrome.length() << endl;
    cout << palindrome << endl;
    
    return 0;
}