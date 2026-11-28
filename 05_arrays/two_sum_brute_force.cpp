// Question: Find all pairs of indices (i, j) in an array whose values add up to target (Brute Force O(N^2)).
#include <iostream>
#include <vector>
using namespace std;

void twoSumBruteForce(const vector<int>& nums, int target) {
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] + nums[j] == target) {
                cout << "Pair indices: (" << i << ", " << j << ")" << endl;
            }
        }
    }
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    twoSumBruteForce(nums, target);
    return 0;
}
