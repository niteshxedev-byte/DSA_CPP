// Question: Reverse an array in-place using recursion and two pointers (O(1) auxiliary space).
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void reverseArrayTwoPointer(vector<int>& arr, int left, int right) {
    if (left >= right) {
        return;
    }
    swap(arr[left], arr[right]);
    reverseArrayTwoPointer(arr, left + 1, right - 1);
}

void printVector(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {23, 4, 52, 46, 4};

    cout << "Before reverse: ";
    printVector(arr);

    reverseArrayTwoPointer(arr, 0, static_cast<int>(arr.size()) - 1);

    cout << "After reverse:  ";
    printVector(arr);

    return 0;
}
