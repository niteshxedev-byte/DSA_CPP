#include <iostream>
#include <vector>

using namespace std;

// ============================================================================
// LeetCode 1572: Matrix Diagonal Sum
// Difficulty: Easy
// Time Complexity:  O(N) - Single pass over diagonal indices
// Space Complexity: O(1)
// ============================================================================
class Solution {
public:
    int diagonalSum(const vector<vector<int>>& mat) {
        int n = mat.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            ans += mat[i][i];                // Primary diagonal
            if (i != n - i - 1) {
                ans += mat[i][n - i - 1];    // Secondary diagonal (avoid center duplicate)
            }
        }

        return ans;
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

    vector<vector<int>> matrix1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Matrix 1 (3x3):\n";
    printMatrix(matrix1);
    cout << "Diagonal Sum: " << sol.diagonalSum(matrix1) << "\n\n"; // 1 + 5 + 9 + 3 + 7 = 25

    vector<vector<int>> matrix2 = {
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 1, 1}
    };
    cout << "Matrix 2 (4x4):\n";
    printMatrix(matrix2);
    cout << "Diagonal Sum: " << sol.diagonalSum(matrix2) << "\n\n"; // 8

    vector<vector<int>> matrix3 = {{5}};
    cout << "Matrix 3 (1x1):\n";
    printMatrix(matrix3);
    cout << "Diagonal Sum: " << sol.diagonalSum(matrix3) << "\n";   // 5

    return 0;
}
