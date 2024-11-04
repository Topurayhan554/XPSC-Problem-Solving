#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> original(n);
        for (int i = 0; i < n; i++)
        {
            int bi;
            string moves;
            cin >> bi >> moves;
            int current_digit = a[i];
            for (char move : moves)
            {
                if (move == 'U')
                {
                    current_digit = (current_digit + 9) % 10;
                }
                else if (move == 'D')
                {
                    current_digit = (current_digit + 1) % 10;
                }
            }
            original[i] = current_digit;
        }
        for (int i = 0; i < n; i++)
        {
            cout << original[i] << " ";
        }
        cout<<endl;
    }
    return 0;
}