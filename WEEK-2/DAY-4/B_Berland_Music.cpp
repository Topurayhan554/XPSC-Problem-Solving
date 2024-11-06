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
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        string s;
        cin >> s;
        vector<int> liked_indices;
        vector<int> disliked_indices;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                liked_indices.push_back(i);
            }
            else
            {
                disliked_indices.push_back(i);
            }
        }
        sort(liked_indices.begin(), liked_indices.end(), [&](int a, int b)
        {
            return p[a] < p[b];
        });
        
        sort(disliked_indices.begin(), disliked_indices.end(), [&](int a, int b)
        {
            return p[a] < p[b];
        });
        
        vector<int> q(n);
        int current_rating = 1;
        for (int idx : disliked_indices)
        {
            q[idx] = current_rating++;
        }
        for (int idx : liked_indices)
        {
            q[idx] = current_rating++;
        }
        for (int i = 0; i < n; ++i)
        {
            cout << q[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}