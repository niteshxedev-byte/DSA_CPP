#include <iostream>
#include <vector>

using namespace std;

// ============================================================================
// LeetCode 1470: Shuffle the Array
// Difficulty: Easy
// Time Complexity:  O(N)
// Space Complexity: O(N) auxiliary space
// ============================================================================
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> temp;
        temp.reserve(2 * n);

        for (int i = 0; i < n; i++) {
            temp.push_back(nums[i]);
            temp.push_back(nums[n + i]);
        }

        return temp;
    }
};

void printVector(const vector<int>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i] << (i + 1 < vec.size() ? ", " : "");
    }
    cout << "]\n";
}

int main() {
    Solution sol;

    // Test Case 1
    vector<int> nums1 = {2, 5, 1, 3, 4, 7};
    int n1 = 3;
    cout << "Test 1 Output: ";
    printVector(sol.shuffle(nums1, n1)); // Expected: [2, 3, 5, 4, 1, 7]

    // Test Case 2
    vector<int> nums2 = {1, 2, 3, 4, 4, 3, 2, 1};
    int n2 = 4;
    cout << "Test 2 Output: ";
    printVector(sol.shuffle(nums2, n2)); // Expected: [1, 4, 2, 3, 3, 2, 4, 1]

    // Test Case 3
    vector<int> nums3 = {1, 1, 2, 2};
    int n3 = 2;
    cout << "Test 3 Output: ";
    printVector(sol.shuffle(nums3, n3)); // Expected: [1, 2, 1, 2]

    return 0;
}
