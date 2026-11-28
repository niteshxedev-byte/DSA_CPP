// Question: Search for a target value in a 2D matrix and print its (row, col) coordinates.
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

pair<int, int> searchInMatrix(const vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == target) {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {5, 12, 15},
        {5, 0, 9}
    };

    auto pos = searchInMatrix(matrix, 9);
    cout << "Target 9 found at: (" << pos.first << ", " << pos.second << ")" << endl;

    auto missing = searchInMatrix(matrix, 99);
    cout << "Target 99 found at: (" << missing.first << ", " << missing.second << ")" << endl;

    return 0;
}
