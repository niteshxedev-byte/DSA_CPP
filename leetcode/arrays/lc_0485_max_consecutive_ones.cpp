#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ============================================================================
// LeetCode 485: Max Consecutive Ones
// Difficulty: Easy
// Time Complexity:  O(N) - Single pass
// Space Complexity: O(1)
// ============================================================================
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currentCount = 0;

        for (int num : nums) {
            if (num == 1) {
                currentCount++;
                maxCount = max(maxCount, currentCount);
            } else {
                currentCount = 0;
            }
        }

        return maxCount;
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

    vector<int> nums1 = {1, 1, 0, 1, 1, 1};
    cout << "Input 1: ";
    printVector(nums1);
    cout << "Max Consecutive 1s: " << sol.findMaxConsecutiveOnes(nums1) << "\n\n"; // Expected: 3

    vector<int> nums2 = {1, 0, 1, 1, 0, 1};
    cout << "Input 2: ";
    printVector(nums2);
    cout << "Max Consecutive 1s: " << sol.findMaxConsecutiveOnes(nums2) << "\n\n"; // Expected: 2

    vector<int> nums3 = {0, 0, 0};
    cout << "Input 3: ";
    printVector(nums3);
    cout << "Max Consecutive 1s: " << sol.findMaxConsecutiveOnes(nums3) << "\n";   // Expected: 0

    return 0;
}
