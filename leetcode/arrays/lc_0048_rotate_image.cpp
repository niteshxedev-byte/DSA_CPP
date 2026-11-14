#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// ============================================================================
// LeetCode 48: Rotate Image (90 degrees clockwise in-place)
// Difficulty: Medium
// Time Complexity:  O(N^2)
// Space Complexity: O(1) auxiliary space (in-place)
// ============================================================================
class Solution {
public:
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
};

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        cout << "  [ ";
        for (int val : row) {
            cout << val << " ";
        }
        cout << "]\n";
    }
}

int main() {
    Solution sol;

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    sol.rotate(matrix);

    cout << "\nRotated Matrix (90 deg Clockwise):\n";
    printMatrix(matrix);
    // Expected:
    // [ 7 4 1 ]
    // [ 8 5 2 ]
    // [ 9 6 3 ]

    return 0;
}
