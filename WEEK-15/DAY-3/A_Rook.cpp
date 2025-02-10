#include <bits/stdc++.h>
using namespace std;
void find_Moves(string position)
{
    char col = position[0];
    char row = position[1];
    for (char r = '1'; r <= '8'; r++)
    {
        if (r != row) {
            cout << col << r << endl;
        }
    }
    for (char c = 'a'; c <= 'h'; c++) {
        if (c != col) {
            cout << c << row << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string position;
        cin >> position;
        find_Moves(position);
    }
    return 0;
}
