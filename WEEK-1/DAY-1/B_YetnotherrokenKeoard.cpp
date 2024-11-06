#include <iostream>
#include <string>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    std::cin.ignore(); // To ignore the newline after the integer input

    std::vector<std::string> results(t);
    for (int i = 0; i < t; ++i) {
        std::string input;
        std::getline(std::cin, input);
        std::string result;

        for (char ch : input) {
            if (ch == 'b') {
                // Remove the last lowercase letter if possible
                for (int j = result.size() - 1; j >= 0; --j) {
                    if (result[j] >= 'a' && result[j] <= 'z') {
                        result.erase(j, 1);
                        break;
                    }
                }
            } else if (ch == 'B') {
                // Remove the last uppercase letter if possible
                for (int j = result.size() - 1; j >= 0; --j) {
                    if (result[j] >= 'A' && result[j] <= 'Z') {
                        result.erase(j, 1);
                        break;
                    }
                }
            } else {
                // Append the character to the result
                result.push_back(ch);
            }
        }

        results[i] = result; // Store the final result for this test case
    }

    for (const auto& res : results) {
        std::cout << res << "\n"; // Print all results
    }

    return 0;
}
