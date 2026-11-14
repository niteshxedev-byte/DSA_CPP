#include <iostream>
#include <vector>

using namespace std;

// ============================================================================
// LeetCode 74: Search a 2D Matrix
// Difficulty: Medium
// Time Complexity:  O(log m + log n) = O(log(m * n))
// Space Complexity: O(1)
// ============================================================================
class Solution {
public:
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
};

void printMatrix(const vector<vector<int>>& mat) {
    for (const auto& row : mat) {
        cout << "  [ ";
        for (int val : row) cout << val << " ";
        cout << "]\n";
    }
}

int main() {
    Solution solver;

    vector<vector<int>> matrix = {
        {1,  3,  5,  7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    cout << "Matrix:\n";
    printMatrix(matrix);

    int target1 = 3;
    cout << "\nSearch for target " << target1 << ": "
         << (solver.searchMatrix(matrix, target1) ? "FOUND (true)" : "NOT FOUND (false)") << "\n";

    int target2 = 13;
    cout << "Search for target " << target2 << ": "
         << (solver.searchMatrix(matrix, target2) ? "FOUND (true)" : "NOT FOUND (false)") << "\n";

    int target3 = 60;
    cout << "Search for target " << target3 << ": "
         << (solver.searchMatrix(matrix, target3) ? "FOUND (true)" : "NOT FOUND (false)") << "\n";

    int target4 = 0;
    cout << "Search for target " << target4 << ": "
         << (solver.searchMatrix(matrix, target4) ? "FOUND (true)" : "NOT FOUND (false)") << "\n";

    return 0;
}
