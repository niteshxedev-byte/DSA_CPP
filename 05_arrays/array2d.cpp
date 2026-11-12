#include <bits/stdc++.h>
using namespace std;

// --- 2D Array Functions ---
void printRow(int arr[][3], int row, int coll) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coll; j++) {
            cout << arr[i][j] << ",";
        }
        cout << endl;
    }
}

void printCOL(int arr[][3], int row, int coll) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coll; j++) {
            cout << arr[j][i] << ",";
        }
        cout << endl;
    }
}

vector<int> printRowWizeSUm(int arr[][3], int row, int coll) {
    vector<int> temp;
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < coll; j++) {
            sum = sum + arr[i][j];
        }
        temp.push_back(sum);
    }
    return temp;
}

vector<int> printCOLWizeSUm(int arr[][3], int row, int coll) {
    vector<int> temp;
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < coll; j++) {
            sum = sum + arr[j][i];
        }
        temp.push_back(sum);
    }
    return temp;
}

void printvec(vector<int> &vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << ",";
    }
}

// --- 2D Vector Functions ---
void SearchinMatrix(const vector<vector<int>> &matrix, int target) {
    int coll = matrix[0].size();
    int row = matrix.size();
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coll; j++) {
            if (matrix[i][j] == target) {
                cout << i << "," << j;
                return;
            }
        }
    }
    cout << -1;
}

void finDmax(const vector<vector<int>> &matrix) {
    int maxVal = matrix[0][0];
    int coll = matrix[0].size();
    int row = matrix.size();
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coll; j++) {
            if (maxVal < matrix[i][j]) {
                maxVal = matrix[i][j];
            }
        }
    }
    cout << maxVal;
}

void finDmin(const vector<vector<int>> &matrix) {
    int minVal = matrix[0][0];
    int coll = matrix[0].size();
    int row = matrix.size();
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < coll; j++) {
            if (minVal > matrix[i][j]) {
                minVal = matrix[i][j];
            }
        }
    }
    cout << minVal;
}

int main() {
    // Part 1: 2D Array Operations
    int arr[3][3] = {
        {1, 2, 3},
        {10, 12, 15},
        {5, 7, 9}
    };

    printRow(arr, 3, 3);
    cout << endl;

    printCOL(arr, 3, 3);
    cout << endl;

    vector<int> vecsumRow = printRowWizeSUm(arr, 3, 3);
    printvec(vecsumRow);
    cout << endl;

    vector<int> vecsumcol = printCOLWizeSUm(arr, 3, 3);
    printvec(vecsumcol);
    cout << endl << endl;

    // Part 2: 2D Vector Operations
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {5, 12, 15},
        {5, 0, 9}
    };

    SearchinMatrix(matrix, 9);
    cout << endl;

    finDmax(matrix);
    cout << endl;

    finDmin(matrix);
    cout << endl;

    return 0;
}
