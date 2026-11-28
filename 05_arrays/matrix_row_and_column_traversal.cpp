// Question: Traverse and print a 2D array in row-major order and column-major order.
#include <iostream>
using namespace std;

void printRowMajor(const int arr[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printColumnMajor(const int arr[][3], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {10, 12, 15},
        {5, 7, 9}
    };

    cout << "Row-major traversal:" << endl;
    printRowMajor(arr, 3, 3);

    cout << "\nColumn-major traversal:" << endl;
    printColumnMajor(arr, 3, 3);

    return 0;
}
