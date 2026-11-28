// Question: Perform linear search on an array/vector to find a target index using recursion.
#include <iostream>
#include <vector>
using namespace std;

int linearSearchRecursive(const vector<int>& arr, int target, int idx = 0) {
    // Base case 1: reached end of vector without finding target
    if (idx >= static_cast<int>(arr.size())) {
        return -1;
    }
    // Base case 2: target found
    if (arr[idx] == target) {
        return idx;
    }
    return linearSearchRecursive(arr, target, idx + 1);
}

int main() {
    vector<int> arr = {23, 4, 52, 46, 4};

    int target1 = 46;
    int idx1 = linearSearchRecursive(arr, target1);
    cout << "Target " << target1 << (idx1 != -1 ? " found at index " + to_string(idx1) : " not found") << endl;

    int target2 = 99;
    int idx2 = linearSearchRecursive(arr, target2);
    cout << "Target " << target2 << (idx2 != -1 ? " found at index " + to_string(idx2) : " not found") << endl;

    return 0;
}
