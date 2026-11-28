// Question: Perform Binary Search on a sorted array/vector using recursion (O(log N) time).
#include <iostream>
#include <vector>
using namespace std;

int recursiveBinarySearch(const vector<int>& arr, int start, int end, int target) {
    // Base case: search space exhausted
    if (start > end) {
        return -1;
    }

    int mid = start + (end - start) / 2;

    // Check if mid element matches target
    if (arr[mid] == target) {
        return mid;
    }

    // Target lies in right half
    if (arr[mid] < target) {
        return recursiveBinarySearch(arr, mid + 1, end, target);
    }

    // Target lies in left half
    return recursiveBinarySearch(arr, start, mid - 1, target);
}

int main() {
    vector<int> arr = {2, 3, 4, 5, 12, 34, 55};
    int start = 0;
    int end = static_cast<int>(arr.size()) - 1;

    int target1 = 12;
    cout << "Target " << target1 << " index: "
         << recursiveBinarySearch(arr, start, end, target1) << endl;

    int target2 = 99;
    cout << "Target " << target2 << " index: "
         << recursiveBinarySearch(arr, start, end, target2) << endl;

    return 0;
}
