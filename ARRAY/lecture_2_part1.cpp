#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Checks whether a vector of integers is sorted in non-decreasing order.
bool findVectorisSorted(const vector<int>& vec) {
    for (size_t i = 0; i + 1 < vec.size(); ++i) {
        if (vec[i] > vec[i + 1]) {
            return false;
        }
    }
    return true;
}

 void twoSum(vector<int>& nums, int target) {         
        int n = nums.size();         
        for(int i = 0; i < n; i++){               
            for(int j = i + 1; j < n; j++){                 
                if(nums[i] + nums[j] == target){             
                    cout<< i<< j;              
                } 
                     
            }             
        }          
         // Placed correctly outside both loops
    } 



int main() {
    // Unsorted vector
    vector<int> vec = {5, 3, 8, 1, 9, 2, 7, 4, 6};
    // Sorted vector
    vector<int> vec1 = {1, 2, 4, 5};

    cout << findVectorisSorted(vec) << '\n';
    cout << findVectorisSorted(vec1) << '\n';



std::vector<int> nums = {2, 7, 11, 15};
int target = 9;


twoSum(nums,target);
    return 0;
}