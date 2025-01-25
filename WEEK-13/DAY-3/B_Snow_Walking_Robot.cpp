#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int L = count(s.begin(), s.end(), 'L');
        int R = count(s.begin(), s.end(), 'R');
        int U = count(s.begin(), s.end(), 'U');
        int D = count(s.begin(), s.end(), 'D');

        int lr = min(L, R);
        int ud = min(U, D);
        if (lr == 0 && ud == 0) {
            cout << 0 << endl;
        }
        else if (lr == 0) {
            cout << 2 << endl;
            cout << "UD" << endl;
        }
        else if (ud == 0) {
            cout << 2 << endl;
            cout << "LR" << endl;
        }
        else {
            int length = 2 * (lr + ud);
            cout << length << endl;
            cout << string(lr, 'L') + string(ud, 'U') + string(lr, 'R') + string(ud, 'D') << endl;
        }
    }
    
    return 0;
}
