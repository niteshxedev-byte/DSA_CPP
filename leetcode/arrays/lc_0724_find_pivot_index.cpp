#include <iostream>
#include <vector>
#include <utility>

using namespace std;

// ============================================================================
// LeetCode 724: Find Pivot Index
// Difficulty: Easy
// Time Complexity:  O(N) - Prefix Sum / Total Sum
// Space Complexity: O(1)
// ============================================================================
class Solution {
public:
    int pivotIndex(vector<int>& vec) {
        int total = 0;
        int n = vec.size();

        for (int i = 0; i < n; i++) {
            total += vec[i];
        }

        int left = 0;
        for (int j = 0; j < n; j++) {
            int rtsum = total - left - vec[j];

            if (rtsum == left) {
                return j;
            }
            left += vec[j];
        }

        return -1;
    }
};

int main() {
    Solution sol;

    // Test cases format: {nums, expected}
    vector<pair<vector<int>, int>> tests = {
        // Examples from problem
        {{1, 7, 3, 6, 5, 6}, 3},
        {{1, 2, 3}, -1},
        {{2, 1, -1}, 0},

        // Single element
        {{1}, 0},
        {{0}, 0},
        {{-5}, 0},

        // Two elements
        {{1, -1}, -1},
        {{-1, 1}, -1},
        {{1, 0}, 0},
        {{0, 1}, 1},
        {{5, 5}, -1},
        {{-1000, 1000}, -1},

        // Left edge pivot
        {{10, -10, 10}, 0},
        {{-1, -1, -1, 0, 1, 1}, 0},

        // Right edge pivot
        {{-1, -1, 0, 1, 1, 0}, 5},

        // Leftmost pivot required
        {{0, 0, 0}, 0},
        {{-1, -1, 0, 0, -1, -1}, 2},
        {{-1, -1, -1, -1, -1, 0}, 2},

        // Middle pivot
        {{1, 2, 1}, 1},
        {{2, 3, -1, 8, 4}, 3},

        // No pivot
        {{1, 1, 1, 1}, -1},
        {{1, 2, 3, 4, 5}, -1},

        // Negatives and zeros
        {{-1, 0, 1}, -1},
        {{0, 0, 0, 0, 0}, 0}
    };

    // Large inputs
    tests.push_back({vector<int>(10000, 0), 0});
    tests.push_back({vector<int>(9999, 1), 4999});
    tests.push_back({vector<int>(10000, 1000), -1});
    tests.push_back({vector<int>(10000, -1000), -1});

    int passed = 0;
    for (size_t i = 0; i < tests.size(); i++) {
        vector<int> nums = tests[i].first;
        int expected = tests[i].second;
        int got = sol.pivotIndex(nums);

        if (got == expected) {
            passed++;
            cout << "Test " << i + 1 << " PASSED | n = " << nums.size() << " -> pivot " << got << endl;
        } else {
            cout << "Test " << i + 1 << " FAILED | n = " << nums.size()
                 << " | expected = " << expected << " | got = " << got << endl;
        }
    }

    cout << "\nResult: " << passed << "/" << tests.size() << " tests passed." << endl;
    return 0;
}
