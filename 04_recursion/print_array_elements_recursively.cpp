// Question: Print all elements of an array or vector using recursion.
#include <iostream>
#include <vector>
using namespace std;

// Approach 1: Using vector with index
void printVectorRecursive(const vector<int>& vec, int idx = 0) {
    if (idx >= static_cast<int>(vec.size())) {
        return;
    }
    cout << vec[idx] << " ";
    printVectorRecursive(vec, idx + 1);
}

// Approach 2: Using raw pointer arithmetic
void printArrayRecursive(const int* arr, int size) {
    if (size <= 0) {
        return;
    }
    cout << arr[0] << " ";
    printArrayRecursive(arr + 1, size - 1);
}

int main() {
    vector<int> vec = {20, 32, 3, 53, 34, 5};
    cout << "Vector elements: ";
    printVectorRecursive(vec);
    cout << endl;

    int arr[6] = {1, 2, 12, 5, 6, 7};
    cout << "Array elements:  ";
    printArrayRecursive(arr, 6);
    cout << endl;

    return 0;
}
