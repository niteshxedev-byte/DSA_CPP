// Question: Reverse an array using extra vector (O(N) space) and two pointers in-place (O(1) space).
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

// Approach 1: Using extra vector
vector<int> reverseWithExtraVector(const vector<int>& vec) {
    vector<int> temp;
    for (int i = static_cast<int>(vec.size()) - 1; i >= 0; i--) {
        temp.push_back(vec[i]);
    }
    return temp;
}

// Approach 2: In-place two-pointer swap
void reverseInPlace(vector<int>& vec) {
    int left = 0;
    int right = static_cast<int>(vec.size()) - 1;

    while (left < right) {
        swap(vec[left], vec[right]);
        left++;
        right--;
    }
}

void printVector(const vector<int>& vec) {
    for (int x : vec) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> nums = {12, 3, 5, 6, 87};

    vector<int> revCopy = reverseWithExtraVector(nums);
    cout << "Reversed (extra vector): ";
    printVector(revCopy);

    reverseInPlace(nums);
    cout << "Reversed (two-pointer):  ";
    printVector(nums);

    return 0;
}
