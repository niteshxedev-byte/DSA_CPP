// Question: Reverse an array using recursion and an extra vector (O(N) space).
#include <iostream>
#include <vector>
using namespace std;

void reverseArrayExtraVector(const vector<int>& arr, vector<int>& reversed, int idx) {
    if (idx < 0) {
        return;
    }
    reversed.push_back(arr[idx]);
    reverseArrayExtraVector(arr, reversed, idx - 1);
}

void printVector(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {23, 4, 52, 46, 4};
    vector<int> reversed;

    reverseArrayExtraVector(arr, reversed, static_cast<int>(arr.size()) - 1);

    cout << "Original: ";
    printVector(arr);
    cout << "Reversed: ";
    printVector(reversed);

    return 0;
}
