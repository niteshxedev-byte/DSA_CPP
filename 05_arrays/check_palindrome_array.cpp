// Question: Check whether an array is a palindrome using two pointers.
#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(const vector<int>& vec) {
    int left = 0;
    int right = static_cast<int>(vec.size()) - 1;

    while (left < right) {
        if (vec[left] != vec[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    vector<int> a = {1, 2, 2, 2, 2, 1};
    vector<int> b = {1, 2, 3, 4, 1};

    cout << "{1,2,2,2,2,1}: " << (isPalindrome(a) ? "palindrome" : "not palindrome") << endl;
    cout << "{1,2,3,4,1}:   " << (isPalindrome(b) ? "palindrome" : "not palindrome") << endl;

    return 0;
}
