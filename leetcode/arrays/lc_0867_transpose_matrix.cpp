#include <iostream>
#include <vector>

using namespace std;

// ============================================================================
// LeetCode 867: Transpose Matrix
// Difficulty: Easy
// Time Complexity:  O(R * C)
// Space Complexity: O(R * C) - Returns new transposed matrix
// ============================================================================
class Solution {
public:
    vector<vector<int>> transpose(const vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // Output matrix has dimensions: cols x rows
        vector<vector<int>> result(cols, vector<int>(rows));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[j][i] = matrix[i][j];
            }
        }

        return result;
    }
};

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        cout << "  [ ";
        for (int val : row) cout << val << " ";
        cout << "]\n";
    }
}

int main() {
    Solution sol;

    // Test Case: Rectangular Matrix
    vector<vector<int>> matrix = {
        {2,   4, -1},
        {-10, 5, 11},
        {18, -7,  6}
    };

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    vector<vector<int>> result = sol.transpose(matrix);
    cout << "\nTransposed Matrix:\n";
    printMatrix(result);

    return 0;
}
