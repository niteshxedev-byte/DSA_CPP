#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

// ============================================================================
// LeetCode 33: Search in Rotated Sorted Array
// Difficulty: Medium
// Time Complexity:  O(log N) - Binary Search
// Space Complexity: O(1) - In-place
// ============================================================================
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            // Check if left half [start ... mid] is sorted
            if (nums[start] <= nums[mid]) {
                if (target >= nums[start] && target < nums[mid]) {
                    end = mid - 1; // target lies in the sorted left half
                } else {
                    start = mid + 1;
                }
            }
            // Otherwise, right half [mid ... end] must be sorted
            else {
                if (target > nums[mid] && target <= nums[end]) {
                    start = mid + 1; // target lies in the sorted right half
                } else {
                    end = mid - 1;
                }
            }
        }

        return -1; // Target not found
    }
};

int main() {
    Solution sol;

    // Test cases format: {nums, target, expected}
    vector<tuple<vector<int>, int, int>> tests = {
        // Official Examples
        {{4, 5, 6, 7, 0, 1, 2}, 0, 4},
        {{4, 5, 6, 7, 0, 1, 2}, 3, -1},
        {{1}, 0, -1},

        // Single element
        {{1}, 1, 0},
        {{-10000}, -10000, 0},
        {{10000}, 5, -1},

        // Two elements (rotated and unrotated)
        {{1, 3}, 1, 0},
        {{1, 3}, 3, 1},
        {{1, 3}, 2, -1},
        {{3, 1}, 1, 1},
        {{3, 1}, 3, 0},
        {{3, 1}, 0, -1},

        // Unrotated arrays (k = 0)
        {{1, 3, 5}, 1, 0},
        {{1, 3, 5}, 3, 1},
        {{1, 3, 5}, 5, 2},
        {{1, 2, 3, 4, 5, 6, 7, 8, 9}, 5, 4},

        // Discussion test cases
        {{6, 7, 1, 2, 3, 4, 5}, 6, 0},
        {{4, 5, 6, 7, 8, 1, 2, 3}, 3, 7},
        {{8, 9, 10, 1, 2, 3, 4, 5, 6, 7}, 11, -1},

        // Pivot at extreme positions (k = 1 and k = n - 1)
        {{2, 3, 4, 5, 6, 7, 1}, 1, 6},
        {{2, 3, 4, 5, 6, 7, 1}, 2, 0},
        {{7, 1, 2, 3, 4, 5, 6}, 7, 0},
        {{7, 1, 2, 3, 4, 5, 6}, 6, 6},

        // Target exactly at mid, start, or end
        {{4, 5, 6, 7, 0, 1, 2}, 7, 3},
        {{4, 5, 6, 7, 0, 1, 2}, 4, 0},
        {{4, 5, 6, 7, 0, 1, 2}, 2, 6},

        // Negative values and boundary constraints [-10^4, 10^4]
        {{-2, -1, 0, -10, -8, -5}, -10, 3},
        {{-2, -1, 0, -10, -8, -5}, 0, 2},
        {{-2, -1, 0, -10, -8, -5}, -3, -1},
        {{9998, 9999, 10000, -10000, -9999}, -10000, 3},
        {{9998, 9999, 10000, -10000, -9999}, 10000, 2}
    };

    // Large input test (constraint: n = 5000, rotated at index 2500)
    vector<int> largeArr;
    for (int i = 0; i < 2500; i++) largeArr.push_back(i * 2);
    for (int i = 0; i < 2500; i++) largeArr.push_back(-5000 + i * 2);

    tests.push_back({largeArr, -5000, 2500});
    tests.push_back({largeArr, 4998, 2499});
    tests.push_back({largeArr, 0, 0});
    tests.push_back({largeArr, -2, 4999});
    tests.push_back({largeArr, 1, -1});

    int passed = 0;
    for (size_t i = 0; i < tests.size(); i++) {
        vector<int> nums = get<0>(tests[i]);
        int target = get<1>(tests[i]);
        int expected = get<2>(tests[i]);
        int got = sol.search(nums, target);

        if (got == expected) {
            passed++;
            cout << "Test " << i + 1 << " PASSED | target = " << target << " -> index " << got << endl;
        } else {
            cout << "Test " << i + 1 << " FAILED | target = " << target
                 << " | expected = " << expected << " | got = " << got << endl;
        }
    }

    cout << "\nResult: " << passed << "/" << tests.size() << " tests passed." << endl;
    return 0;
}
