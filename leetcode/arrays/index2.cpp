#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Helper function to print 1D vectors
void printVector(const vector<int>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i] << (i + 1 < vec.size() ? ", " : "");
    }
    cout << "]\n";
}

// Helper function to print 2D matrices
void printMatrix(const vector<vector<int>>& mat) {
    for (const auto& row : mat) {
        cout << "  ";
        printVector(row);
    }
}

class Solution {
public:
    // =========================================================================
    // LeetCode 88: Merge Sorted Array
    // Time Complexity: O((m + n) log(m + n)) due to sort()
    // Space Complexity: O(1) in-place
    // =========================================================================
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }

    // Optimal Alternative: 3-Pointer O(m + n) time, O(1) space (Backwards Merge)
    void mergeOptimal(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;       // Pointer for end of valid nums1
        int p2 = n - 1;       // Pointer for end of nums2
        int p = m + n - 1;    // Pointer for end of nums1 allocated space

        while (p2 >= 0) {
            if (p1 >= 0 && nums1[p1] > nums2[p2]) {
                nums1[p--] = nums1[p1--];
            } else {
                nums1[p--] = nums2[p2--];
            }
        }
    }

    // =========================================================================
    // LeetCode 74: Search a 2D Matrix
    // Time Complexity: O(log m + log n) = O(log(m * n))
    // Space Complexity: O(1)
    // =========================================================================
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // Step 1: Binary search over rows -> O(log m)
        int top = 0, bottom = rows - 1;
        int targetRow = -1;
        
        while (top <= bottom) {
            int midRow = top + (bottom - top) / 2;
            
            if (target >= matrix[midRow][0] && target <= matrix[midRow][cols - 1]) {
                targetRow = midRow;
                break;
            } else if (target < matrix[midRow][0]) {
                bottom = midRow - 1;
            } else {
                top = midRow + 1;
            }
        }
        
        if (targetRow == -1) return false;
        
        // Step 2: Binary search over columns in targetRow -> O(log n)
        int left = 0, right = cols - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (matrix[targetRow][mid] == target) {
                return true;
            } else if (matrix[targetRow][mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return false;
    }

    // =========================================================================
    // LeetCode 485: Max Consecutive Ones
    // Time Complexity: O(N)
    // Space Complexity: O(1)
    // =========================================================================
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max = 0;
        int cheak = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                cheak = cheak + 1;
                if (max < cheak) {
                    max = cheak;
                }
            } else {
                cheak = 0;
            }
        }
        return max;
    }
};

int main() {
    Solution solver;

    cout << "====================================================\n";
    cout << "  LeetCode 88: Merge Sorted Array Tests\n";
    cout << "====================================================\n";

    // Test Case 1
    vector<int> nums1_a = {1, 2, 3, 0, 0, 0};
    int m_a = 3;
    vector<int> nums2_a = {2, 5, 6};
    int n_a = 3;
    cout << "Input 1: nums1 = [1, 2, 3, 0, 0, 0], nums2 = [2, 5, 6]\n";
    solver.merge(nums1_a, m_a, nums2_a, n_a);
    cout << "Result:  ";
    printVector(nums1_a); // Expected: [1, 2, 2, 3, 5, 6]

    // Test Case 2
    vector<int> nums1_b = {1};
    int m_b = 1;
    vector<int> nums2_b = {};
    int n_b = 0;
    cout << "\nInput 2: nums1 = [1], nums2 = []\n";
    solver.merge(nums1_b, m_b, nums2_b, n_b);
    cout << "Result:  ";
    printVector(nums1_b); // Expected: [1]

    // Test Case 3
    vector<int> nums1_c = {0};
    int m_c = 0;
    vector<int> nums2_c = {1};
    int n_c = 1;
    cout << "\nInput 3: nums1 = [0], nums2 = [1]\n";
    solver.merge(nums1_c, m_c, nums2_c, n_c);
    cout << "Result:  ";
    printVector(nums1_c); // Expected: [1]

    cout << "\n====================================================\n";
    cout << "  LeetCode 74: Search a 2D Matrix Tests\n";
    cout << "====================================================\n";

    vector<vector<int>> matrix = {
        {1,  3,  5,  7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    cout << "Matrix:\n";
    printMatrix(matrix);

    int target1 = 3;
    cout << "\nSearch for target " << target1 << ": "
         << (solver.searchMatrix(matrix, target1) ? "FOUND (true)" : "NOT FOUND (false)") << "\n"; // Expected: true

    int target2 = 13;
    cout << "Search for target " << target2 << ": "
         << (solver.searchMatrix(matrix, target2) ? "FOUND (true)" : "NOT FOUND (false)") << "\n"; // Expected: false

    int target3 = 60;
    cout << "Search for target " << target3 << ": "
         << (solver.searchMatrix(matrix, target3) ? "FOUND (true)" : "NOT FOUND (false)") << "\n"; // Expected: true

    int target4 = 0;
    cout << "Search for target " << target4 << ": "
         << (solver.searchMatrix(matrix, target4) ? "FOUND (true)" : "NOT FOUND (false)") << "\n"; // Expected: false

    cout << "\n====================================================\n";
    cout << "  LeetCode 485: Max Consecutive Ones Tests\n";
    cout << "====================================================\n";

    vector<int> binary1 = {1, 1, 0, 1, 1, 1};
    cout << "Input:  ";
    printVector(binary1);
    cout << "Max Consecutive 1s: " << solver.findMaxConsecutiveOnes(binary1) << "\n"; // Expected: 3

    vector<int> binary2 = {1, 0, 1, 1, 0, 1};
    cout << "\nInput:  ";
    printVector(binary2);
    cout << "Max Consecutive 1s: " << solver.findMaxConsecutiveOnes(binary2) << "\n"; // Expected: 2

    vector<int> binary3 = {0, 0, 0};
    cout << "\nInput:  ";
    printVector(binary3);
    cout << "Max Consecutive 1s: " << solver.findMaxConsecutiveOnes(binary3) << "\n"; // Expected: 0

    return 0;
}
