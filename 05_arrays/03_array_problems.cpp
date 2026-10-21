#include <iostream> // include iostream for input output
#include <vector>   // include vector for dynamic arrays
#include <algorithm> // include algorithm for max function

using namespace std; // use standard namespace for simplicity

// Checks whether a vector of integers is sorted in non-decreasing order.
bool findVectorisSorted(const vector<int>& vec) { // function to test if vector is sorted
    for (size_t i = 0; i + 1 < vec.size(); ++i) { // loop through each adjacent pair
        if (vec[i] > vec[i + 1]) { // if current element larger than next, not sorted
            return false; // exit early with false
        }
    }
    return true; // if never found out-of-order, it's sorted
}

// Finds and prints all pairs of indices (i, j) such that nums[i] + nums[j] == target.
void twoSum(vector<int>& nums, int target) { // function to find pairs that sum to target
    int n = nums.size(); // get length of array
    for (int i = 0; i < n; ++i) { // outer loop over each element
        for (int j = i + 1; j < n; ++j) { // inner loop over later elements
            if (nums[i] + nums[j] == target) { // check if pair sums to target
                cout << i << " " << j << endl; // print their indices
            }
        }
    }
}

// Finds the length of the longest consecutive sequence of 1s in a binary vector.
int findMaxConsecutiveOnes(vector<int>& nums) { // find longest streak of 1s
    int ans = 0; // best streak length found so far
    int cs = 0; // current streak length
    int n = nums.size(); // array length
    for (int i = 0; i < n; ++i) { // scan each element
        if (nums[i] == 1) { // if element is 1
            cs = cs + 1; // extend current streak
            ans = max(ans, cs); // update best if needed
        } else { // if element is 0
            cs = 0; // reset streak
        }
    }
    return ans; // return longest streak
}

// Rotates the vector left by one position (the first element moves to the end).
void leftRotateby1(vector<int>& nums ) { // rotate array left by one position
    int firstElement = nums[0]; // store first element
    int n = nums.size(); // length
    for(int i =0 ;i<n-1;i++){ // shift elements left
        nums[i]=nums[i+1]; // move next element to current spot
    }
    nums[n-1]=firstElement; // place stored first element at end
}

// Prints the elements of a vector separated by commas.
void printVector(vector <int>&nums){ // print vector elements separated by commas
    int n = nums.size(); // length
    for(int i = 0 ; i < n ; i++){ // iterate
        cout<<nums[i]<<","; // output each element with comma
    }
}

// Rotates the vector right by one position (the last element moves to the front).
void rightRotateby1(vector <int>&nums){ // rotate array right by one position
    int n = nums.size(); // length
    int lastEl = nums[n-1]; // store last element
    for(int i = n-1 ;i > 0;i--){ // shift elements right
        nums[i]=nums[i-1]; // move previous element forward
    }
    nums[0]= lastEl; // put stored last element at front
}



// Reverses the vector in-place using the two‑pointer technique.
// This function swaps elements from the ends moving towards the center,
// effectively reversing the order of the vector.
// Example: {1,2,3,4} becomes {4,3,2,1}.
void revrseVector(vector <int>&vec2){ // reverse vector using two-pointer technique
    // Initialize two indices: one at the start (right) and one at the end (left).
    int left = vec2.size() - 1; // index of the last element
    int right = 0;              // index of the first element

    // Continue swapping while the left index is greater than the right index.
    while (right < left) {
        // Swap the elements at positions 'right' and 'left'.
        int temp = vec2[right];
        vec2[right] = vec2[left];
        vec2[left] = temp;

        // Move the pointers towards the center.
        right = right + 1;
        left = left - 1;
    }
    // When the loop finishes, the vector is reversed.
}


int main() { // program entry point
    // Unsorted vector
    vector<int> vec = {5, 3, 8, 1, 9, 2, 7, 4, 6}; // example unsorted data
    // Sorted vector
    vector<int> vec1 = {1, 2,3, 4, 5}; // example sorted data

    cout << findVectorisSorted(vec) << '\n'; // test sorting on unsorted vector
    cout << findVectorisSorted(vec1) << '\n'; // test sorting on sorted vector

    std::vector<int> nums = {2, 7, 11, 15}; // sample array for two sum
    int target = 9; // desired sum
    twoSum(nums, target); // find and print index pair that adds to target

    vector<int> ones = {1, 1, 0, 0, 1, 1, 1, 0}; // binary array for max consecutive ones
    int maxOnes = findMaxConsecutiveOnes(ones); // compute longest streak of 1s
    cout << "Max consecutive ones: " << maxOnes << endl; // display result

    // leftRotateby1(vec1);//2,3,4,5,1
    // printVector(vec1);

    cout<<endl; // blank line for readability
    rightRotateby1(vec1); // rotate right by one
    printVector(vec1); // print rotated vector



cout<<"revrse vector"<<endl;


    vector<int> vec2 = {12,3,5,6,87};
    revrseVector(vec2);
    printVector(vec2);



    

    return 0; // exit program
}