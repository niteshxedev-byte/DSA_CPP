#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << "\n";
    }
}

// LeetCode 1572: Matrix Diagonal Sum
int diagonalSum(const vector<vector<int>>& mat) {
    int n = mat.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += mat[i][i];
        if (i != n - i - 1) {
            ans += mat[i][n - i - 1];
        }
    }
    return ans;
}

// LeetCode 867: Transpose Matrix (Works for any rectangular or square matrix)
vector<vector<int>> transpose(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    vector<vector<int>> result(cols, vector<int>(rows));
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
    return result;
}

// LeetCode 48: Rotate Image (90 degrees clockwise in-place)
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    // Step 1: Transpose the square matrix in-place
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    // Step 2: Reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

// LeetCode 485: Max Consecutive Ones
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

int main() {
    // 1. Test Transpose Matrix (LeetCode 867)
    vector<vector<int>> matrix = {
        {2,  4,  -1},
        {-10, 5, 11},
        {18, -7,  6}
    };
    cout << "Transposed Matrix:\n";
    vector<vector<int>> ans = transpose(matrix);
    printMatrix(ans);

    // 2. Test Diagonal Sum (LeetCode 1572)
    cout << "\nDiagonal Sum: " << diagonalSum(matrix) << "\n\n";

    // 3. Test Rotate Image (LeetCode 48)
    vector<vector<int>> img = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    rotate(img);
    cout << "Rotated Matrix (90 deg clockwise):\n";
    printMatrix(img);
    cout << "\n";

    // 4. Test Max Consecutive Ones (LeetCode 485)
    Solution sol;
    vector<int> nums1 = {1, 1, 0, 1, 1, 1};
    cout << "Test Case 1 Output: " << sol.findMaxConsecutiveOnes(nums1) << "\n";
    
    vector<int> nums2 = {1, 0, 1, 1, 0, 1};
    cout << "Test Case 2 Output: " << sol.findMaxConsecutiveOnes(nums2) << "\n";

    return 0;
}
