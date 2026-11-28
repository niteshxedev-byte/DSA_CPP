// Question: Right rotate an array/vector by 1 position in-place.
#include <iostream>
#include <vector>
using namespace std;

void rightRotateByOne(vector<int>& nums) {
    if (nums.empty()) return;
    int n = nums.size();
    int lastEl = nums[n - 1];
    for (int i = n - 1; i > 0; i--) {
        nums[i] = nums[i - 1];
    }
    nums[0] = lastEl;
}

void printVector(const vector<int>& nums) {
    for (int x : nums) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Before right rotate: ";
    printVector(vec);

    rightRotateByOne(vec);

    cout << "After right rotate:  ";
    printVector(vec);
    return 0;
}
