#include <iostream>
#include <vector>

using namespace std;

// ============================================================================
// LeetCode 34: Find First and Last Position of Element in Sorted Array
// Difficulty: Medium
// Time Complexity:  O(log N) - Two Binary Searches
// Space Complexity: O(1) auxiliary space
// ============================================================================
class Solution {
public:
    int startSearch(const vector<int>& nums, int target) {
        int end = nums.size() - 1;
        int start = 0;
        int ans = -1;

        while (end >= start) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                ans = mid;
                end = mid - 1; // Narrow search to the left for first occurrence
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }

    int endSearch(const vector<int>& nums, int target) {
        int end = nums.size() - 1;
        int start = 0;
        int ans = -1;

        while (end >= start) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                ans = mid;
                start = mid + 1; // Narrow search to the right for last occurrence
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {startSearch(nums, target), endSearch(nums, target)};
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

    // Test Case 1: Target exists multiple times
    vector<int> nums1 = {5, 7, 7, 8, 8, 10};
    int target1 = 8;
    cout << "Test 1 (Target 8) Output: ";
    printVector(sol.searchRange(nums1, target1)); // Expected: [3, 4]

    // Test Case 2: Target does not exist
    vector<int> nums2 = {5, 7, 7, 8, 8, 10};
    int target2 = 6;
    cout << "Test 2 (Target 6) Output: ";
    printVector(sol.searchRange(nums2, target2)); // Expected: [-1, -1]

    // Test Case 3: Empty array
    vector<int> nums3 = {};
    int target3 = 0;
    cout << "Test 3 (Empty)    Output: ";
    printVector(sol.searchRange(nums3, target3)); // Expected: [-1, -1]

    return 0;
}
