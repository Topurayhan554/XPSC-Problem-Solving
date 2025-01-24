#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        // Count the occurrences of each direction
        int L = count(s.begin(), s.end(), 'L');
        int R = count(s.begin(), s.end(), 'R');
        int U = count(s.begin(), s.end(), 'U');
        int D = count(s.begin(), s.end(), 'D');
        
        // Calculate the maximum possible balanced steps
        int lr = min(L, R);
        int ud = min(U, D);
        
        // Handle special cases
        if (lr == 0 && ud == 0) {
            cout << 0 << endl;
        } else if (lr == 0) {
            cout << 2 << endl;
            cout << "UD" << endl;
        } else if (ud == 0) {
            cout << 2 << endl;
            cout << "LR" << endl;
        } else {
            // Valid sequence
            int length = 2 * (lr + ud);
            cout << length << endl;
            cout << string(lr, 'L') + string(ud, 'U') + string(lr, 'R') + string(ud, 'D') << endl;
        }
    }
    
    return 0;
}
