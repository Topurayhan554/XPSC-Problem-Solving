#include <iostream>
#include <vector>
using namespace std;

int maxCoins(string path) {
    int n = path.size();
    int coins = 0;
    int i = 0;
    
    while (i < n) {
        if (path[i] == '@') {
            coins++;  // কয়েন পাওয়া যাবে
        }
        
        // দুই সেল লাফানোর চেষ্টা
        if (i + 2 < n && path[i + 2] != '*') {
            i += 2;  // দুই সেল এগিয়ে যেতে পারলে
        } else if (i + 1 < n && path[i + 1] != '*') {
            i++;  // এক সেল এগিয়ে যেতে পারলে
        } else {
            break;  // কোন জায়গায় যাওয়া যাবে না
        }
    }
    
    return coins;
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n;
        cin >> n;
        string path;
        cin >> path;
        cout << maxCoins(path) << endl;
    }
    return 0;
}
