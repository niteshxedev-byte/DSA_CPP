// Question: Compute row-wise sums and column-wise sums of a 2D array into 1D vectors.
#include <iostream>
#include <vector>
using namespace std;

vector<int> rowWiseSum(const int arr[][3], int rows, int cols) {
    vector<int> sums;
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        sums.push_back(sum);
    }
    return sums;
}

vector<int> colWiseSum(const int arr[][3], int rows, int cols) {
    vector<int> sums;
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += arr[i][j];
        }
        sums.push_back(sum);
    }
    return sums;
}

void printVector(const vector<int>& vec) {
    for (int x : vec) cout << x << " ";
    cout << endl;
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {10, 12, 15},
        {5, 7, 9}
    };

    cout << "Row-wise sums: ";
    printVector(rowWiseSum(arr, 3, 3));

    cout << "Col-wise sums: ";
    printVector(colWiseSum(arr, 3, 3));

    return 0;
}
