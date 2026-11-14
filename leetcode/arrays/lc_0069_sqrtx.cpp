#include <iostream>
#include <vector>
#include <utility>

using namespace std;

// ============================================================================
// LeetCode 69: Sqrt(x)
// Difficulty: Easy
// Time Complexity:  O(log x) - Binary Search
// Space Complexity: O(1)
// ============================================================================
class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;

        int start = 1;
        int end = x / 2;
        int ans = 1;

        while (start <= end) {
            long long int mid = start + (end - start) / 2;
            long long int product = mid * mid;

            if (product == x) {
                return mid;
            }

            if (product < x) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;

    // Test cases format: {input, expected}
    vector<pair<int, int>> tests = {
        // Examples from problem
        {4, 2},
        {8, 2},

        // Edge cases
        {0, 0},
        {1, 1},
        {2, 1},
        {3, 1},

        // Perfect squares
        {9, 3},
        {16, 4},
        {25, 5},
        {100, 10},
        {10000, 100},
        {1000000, 1000},

        // Off-by-one perfect squares
        {15, 3},
        {17, 4},
        {24, 4},
        {26, 5},
        {99, 9},
        {101, 10},

        // Large values (checking mid * mid overflow prevention)
        {2147395600, 46340},
        {2147395599, 46339},
        {2147483646, 46340},
        {2147483647, 46340},   // INT_MAX (2^31 - 1)
        {2147302921, 46339},
        {1518500250, 38967},

        // Misc
        {6, 2},
        {10, 3},
        {35, 5},
        {36, 6},
        {63, 7},
        {64, 8},
        {65, 8}
    };

    int passed = 0;
    for (size_t i = 0; i < tests.size(); i++) {
        int x = tests[i].first;
        int expected = tests[i].second;
        int got = sol.mySqrt(x);

        if (got == expected) {
            passed++;
            cout << "Test " << i + 1 << " PASSED | x = " << x << " -> " << got << endl;
        } else {
            cout << "Test " << i + 1 << " FAILED | x = " << x
                 << " | expected = " << expected << " | got = " << got << endl;
        }
    }

    cout << "\nResult: " << passed << "/" << tests.size() << " tests passed." << endl;
    return 0;
}
