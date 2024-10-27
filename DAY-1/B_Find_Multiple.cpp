#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    // Iterate from A to B to find a multiple of C
    for (int i = A; i <= B; i++) {
        if (i % C == 0) {
            cout << i << endl; // Print the first multiple of C found
            return 0; // Exit after finding the first valid number
        }
    }

    // If no multiple is found, print -1
    cout << -1 << endl;
    return 0;
}
