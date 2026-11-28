// Question: Remove duplicates from a sorted array in-place and return the count of unique elements.
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int i = 0, j = 1;
        while (j < n) {
            if (nums[i] != nums[j]) { // found next unique element
                i++;
                nums[i] = nums[j];
            }
            j++;
        }

        return i + 1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int uniqueCount = sol.removeDuplicates(nums);
    cout << "Unique count: " << uniqueCount << endl;
    cout << "Unique elements: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
