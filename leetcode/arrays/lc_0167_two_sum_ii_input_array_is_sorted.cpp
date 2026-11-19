#include <iostream>
#include <vector>

using namespace std;

// ============================================================================
// LeetCode 167: Two Sum II - Input Array Is Sorted
// Difficulty: Medium
// Time Complexity:  O(N) - Two Pointers
// Space Complexity: O(1) - In-place
// ============================================================================
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size() - 1;

        while (start < end) {
            int sum = numbers[start] + numbers[end];

            if (sum == target) {
                // Return 1-based indices as required by problem description
                return {start + 1, end + 1};
            }

            if (sum > target) {
                end--;
            } else {
                start++;
            }
        }

        return {-1, -1};
    }
};

struct TestCase {
    vector<int> numbers;
    int target;
    vector<int> expected;
};

int main() {
    Solution sol;

    vector<TestCase> test_cases = {
        // Provided examples
        {{2, 7, 11, 15}, 9, {1, 2}},
        {{2, 3, 4}, 6, {1, 3}},
        {{-1, 0}, -1, {1, 2}},

        // Extra test cases
        {{1, 2, 4, 4, 9}, 8, {3, 4}},         // Duplicate values forming target
        {{-10, -3, 0, 5, 12}, 2, {1, 5}},     // Mix of negative and positive numbers
        {{0, 0, 3, 4}, 0, {1, 2}},            // Target is zero using zeros
        {{-5, -2, -1}, -7, {1, 2}},           // All negative numbers
        {{1, 1000}, 1001, {1, 2}}             // Boundary values
    };

    int passed = 0;
    for (size_t i = 0; i < test_cases.size(); ++i) {
        vector<int> result = sol.twoSum(test_cases[i].numbers, test_cases[i].target);
        bool match = (result == test_cases[i].expected);
        if (match) passed++;

        cout << "Test " << i + 1 << " (" << (match ? "PASSED" : "FAILED") << "): got [";
        for (size_t j = 0; j < result.size(); ++j) {
            cout << result[j] << (j + 1 < result.size() ? ", " : "");
        }
        cout << "], expected [" << test_cases[i].expected[0] << ", " << test_cases[i].expected[1] << "]\n";
    }

    cout << "\nResult: " << passed << "/" << test_cases.size() << " tests passed.\n";
    return 0;
}
