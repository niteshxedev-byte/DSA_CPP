// Question: Find the maximum number of consecutive 1s in a binary array.
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(const vector<int>& nums) {
    int bestStreak = 0;
    int currentStreak = 0;

    for (int val : nums) {
        if (val == 1) {
            currentStreak++;
            bestStreak = max(bestStreak, currentStreak);
        } else {
            currentStreak = 0;
        }
    }
    return bestStreak;
}

int main() {
    vector<int> nums = {1, 1, 0, 0, 1, 1, 1, 0};
    cout << "Max consecutive ones: " << findMaxConsecutiveOnes(nums) << endl;
    return 0;
}
