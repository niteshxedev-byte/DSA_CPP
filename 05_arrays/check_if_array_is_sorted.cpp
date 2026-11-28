// Question: Check whether an array/vector is sorted in non-decreasing order.
#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int>& vec) {
    for (size_t i = 0; i + 1 < vec.size(); ++i) {
        if (vec[i] > vec[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> unsorted = {5, 3, 8, 1, 9, 2, 7, 4, 6};
    vector<int> sorted = {1, 2, 3, 4, 5};

    cout << "unsorted -> " << (isSorted(unsorted) ? "sorted" : "not sorted") << endl;
    cout << "sorted   -> " << (isSorted(sorted) ? "sorted" : "not sorted") << endl;

    return 0;
}
