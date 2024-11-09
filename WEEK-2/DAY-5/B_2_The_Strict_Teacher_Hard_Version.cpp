#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> teachers(m);
        for (int i = 0; i < m; i++)
        {
            cin >> teachers[i];
        }
        sort(teachers.begin(), teachers.end());
        while(q--)
        {
            int david;
            cin>>david;
            if(david < teachers[0])
            {
                cout<<teachers[0] - 1 <<endl;
                continue;
            }
            if(david > teachers[m-1])
            {
                cout<<n - teachers[m - 1]<<endl;
                continue;
            }
            auto it = lower_bound(teachers.begin(), teachers.end(), david);
            auto jt = it;
            jt--;

            int left = *jt, right = *it;
            int mid = (left + right) / 2;
            int mn = min(abs(mid - left), abs(mid - right));
            cout<<mn<<endl;
           
        }
    }
    return 0;
}
