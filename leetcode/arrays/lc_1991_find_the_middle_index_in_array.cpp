#include <iostream>
#include <vector>
#include <utility>

using namespace std;

// ============================================================================
// LeetCode 1991: Find the Middle Index in Array
// Difficulty: Easy
// Time Complexity:  O(N) - Prefix Sum / Total Sum
// Space Complexity: O(1)
// ============================================================================
class Solution {
public:
    int findMiddleIndex(vector<int>& vec) {
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
        // Official Examples
        {{2, 3, -1, 8, 4}, 3},
        {{1, -1, 4}, 2},
        {{2, 5}, -1},

        // LeetCode 724 Comparison Examples
        {{1, 7, 3, 6, 5, 6}, 3},
        {{1, 2, 3}, -1},
        {{2, 1, -1}, 0},

        // Single element (left = right = 0)
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

        // Left edge middleIndex (index 0)
        {{10, -10, 10}, 0},
        {{-1, -1, -1, 0, 1, 1}, 0},

        // Right edge middleIndex (index n - 1)
        {{-1, -1, 0, 1, 1, 0}, 5},
        {{1, -1, 10}, 2},

        // Leftmost middleIndex required (multiple valid indices)
        {{0, 0, 0}, 0},
        {{-1, -1, 0, 0, -1, -1}, 2},
        {{-1, -1, -1, -1, -1, 0}, 2},

        // Middle index
        {{1, 2, 1}, 1},

        // No valid middleIndex
        {{1, 1, 1, 1}, -1},
        {{1, 2, 3, 4, 5}, -1},

        // Negatives and zeros mix
        {{-1, 0, 1}, -1},
        {{0, 0, 0, 0, 0}, 0}
    };

    // Max constraint inputs (1 <= nums.length <= 100, -1000 <= nums[i] <= 1000)
    tests.push_back({vector<int>(100, 0), 0});
    tests.push_back({vector<int>(99, 1), 49});
    tests.push_back({vector<int>(100, 1000), -1});
    tests.push_back({vector<int>(100, -1000), -1});

    int passed = 0;
    for (size_t i = 0; i < tests.size(); i++) {
        vector<int> nums = tests[i].first;
        int expected = tests[i].second;
        int got = sol.findMiddleIndex(nums);

        if (got == expected) {
            passed++;
            cout << "Test " << i + 1 << " PASSED | n = " << nums.size() << " -> index " << got << endl;
        } else {
            cout << "Test " << i + 1 << " FAILED | n = " << nums.size()
                 << " | expected = " << expected << " | got = " << got << endl;
        }
    }

    cout << "\nResult: " << passed << "/" << tests.size() << " tests passed." << endl;
    return 0;
}
