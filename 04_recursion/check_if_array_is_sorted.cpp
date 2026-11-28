// Question: Check whether an array is sorted in non-decreasing order using recursion.
#include <iostream>
using namespace std;

bool isArraySorted(const int* arr, int size) {
    if (size <= 1) {
        return true;
    }
    if (arr[0] > arr[1]) {
        return false;
    }
    return isArraySorted(arr + 1, size - 1);
}

int main() {
    int unsortedArr[] = {1, 2, 12, 5, 6, 7};
    int sortedArr[] = {1, 2, 5, 6, 7, 12};

    cout << "unsortedArr is " << (isArraySorted(unsortedArr, 6) ? "sorted" : "not sorted") << endl;
    cout << "sortedArr is " << (isArraySorted(sortedArr, 6) ? "sorted" : "not sorted") << endl;

    return 0;
}
