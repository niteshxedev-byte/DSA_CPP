// Question: Calculate the sum and average of array/vector elements using recursion.
#include <iostream>
#include <vector>
using namespace std;

// Approach 1: Vector recursion from the back
int calculateSumVector(const vector<int>& nums, int size) {
    if (size <= 0) {
        return 0;
    }
    return nums[size - 1] + calculateSumVector(nums, size - 1);
}

double calculateAverage(const vector<int>& nums) {
    if (nums.empty()) {
        return 0.0;
    }
    int sum = calculateSumVector(nums, nums.size());
    return static_cast<double>(sum) / nums.size();
}

// Approach 2: Pointer-based array recursion from the front
int sumArrayPointer(const int* arr, int size, int idx = 0) {
    if (idx >= size) {
        return 0;
    }
    return arr[idx] + sumArrayPointer(arr, size, idx + 1);
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << "Vector sum: " << calculateSumVector(nums, nums.size()) << endl;
    cout << "Vector avg: " << calculateAverage(nums) << endl;

    int arr[6] = {1, 2, 12, 5, 6, 7};
    cout << "Array sum:  " << sumArrayPointer(arr, 6) << endl;

    return 0;
}
