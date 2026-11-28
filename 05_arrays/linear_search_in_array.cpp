// Question: Perform linear search in an array/vector to find the index of a target element.
#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& vec, int target) {
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] == target) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {3, 7, 6, 2, 5};
    int target = 7;

    int idx = linearSearch(arr, target);
    if (idx != -1) {
        cout << "Found " << target << " at index " << idx << endl;
    } else {
        cout << target << " not found" << endl;
    }

    return 0;
}
