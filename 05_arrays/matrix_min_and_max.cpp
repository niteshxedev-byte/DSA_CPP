// Question: Find the minimum and maximum elements in a 2D matrix.
#include <iostream>
#include <vector>
using namespace std;

int findMatrixMax(const vector<vector<int>>& matrix) {
    int maxVal = matrix[0][0];
    for (const auto& row : matrix) {
        for (int val : row) {
            if (val > maxVal) {
                maxVal = val;
            }
        }
    }
    return maxVal;
}

int findMatrixMin(const vector<vector<int>>& matrix) {
    int minVal = matrix[0][0];
    for (const auto& row : matrix) {
        for (int val : row) {
            if (val < minVal) {
                minVal = val;
            }
        }
    }
    return minVal;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {5, 12, 15},
        {5, 0, 9}
    };

    cout << "Matrix Max: " << findMatrixMax(matrix) << endl;
    cout << "Matrix Min: " << findMatrixMin(matrix) << endl;

    return 0;
}
