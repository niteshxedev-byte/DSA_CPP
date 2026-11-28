// Question: Left rotate an array/vector by 1 position in-place.
#include <iostream>
#include <vector>
using namespace std;

void leftRotateByOne(vector<int>& nums) {
    if (nums.empty()) return;
    int firstElement = nums[0];
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        nums[i] = nums[i + 1];
    }
    nums[n - 1] = firstElement;
}

void printVector(const vector<int>& nums) {
    for (int x : nums) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Before left rotate: ";
    printVector(vec);

    leftRotateByOne(vec);

    cout << "After left rotate:  ";
    printVector(vec);
    return 0;
}
