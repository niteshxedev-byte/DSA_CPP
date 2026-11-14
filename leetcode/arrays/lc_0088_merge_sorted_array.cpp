#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ============================================================================
// LeetCode 88: Merge Sorted Array
// Difficulty: Easy
// Approach 1 Time: O((m + n) log(m + n)) - Append and Sort
// Approach 2 Time: O(m + n) - Optimal 3-Pointer Backwards Merge
// Space:           O(1) in-place
// ============================================================================
class Solution {
public:
    // Approach 1: Append and Sort
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }

    // Approach 2 (Optimal): 3-Pointer backwards merge in O(m + n)
    void mergeOptimal(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;
        int p2 = n - 1;
        int p = m + n - 1;

        while (p2 >= 0) {
            if (p1 >= 0 && nums1[p1] > nums2[p2]) {
                nums1[p--] = nums1[p1--];
            } else {
                nums1[p--] = nums2[p2--];
            }
        }
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
    Solution solver;

    // Test Case 1
    vector<int> nums1_a = {1, 2, 3, 0, 0, 0};
    int m_a = 3;
    vector<int> nums2_a = {2, 5, 6};
    int n_a = 3;
    cout << "Test 1 Input:  nums1 = [1, 2, 3, 0, 0, 0], nums2 = [2, 5, 6]\n";
    solver.merge(nums1_a, m_a, nums2_a, n_a);
    cout << "Test 1 Output: ";
    printVector(nums1_a); // Expected: [1, 2, 2, 3, 5, 6]

    // Test Case 2 (Empty nums2)
    vector<int> nums1_b = {1};
    int m_b = 1;
    vector<int> nums2_b = {};
    int n_b = 0;
    cout << "\nTest 2 Input:  nums1 = [1], nums2 = []\n";
    solver.merge(nums1_b, m_b, nums2_b, n_b);
    cout << "Test 2 Output: ";
    printVector(nums1_b); // Expected: [1]

    // Test Case 3 (Empty nums1 elements)
    vector<int> nums1_c = {0};
    int m_c = 0;
    vector<int> nums2_c = {1};
    int n_c = 1;
    cout << "\nTest 3 Input:  nums1 = [0], nums2 = [1]\n";
    solver.mergeOptimal(nums1_c, m_c, nums2_c, n_c);
    cout << "Test 3 Output (Optimal): ";
    printVector(nums1_c); // Expected: [1]

    return 0;
}
