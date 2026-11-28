// Question: Check whether a given integer is a palindrome.
#include <iostream>
using namespace std;

bool isPalindrome(int number) {
    if (number < 0) return false;
    int copy = number;
    int revNumber = 0;
    while (copy != 0) {
        int lastDigit = copy % 10;
        revNumber = revNumber * 10 + lastDigit;
        copy /= 10;
    }
    return revNumber == number;
}

int main() {
    int a = 11211, b = 12345;
    cout << a << " -> " << (isPalindrome(a) ? "palindrome" : "not palindrome") << endl;
    cout << b << " -> " << (isPalindrome(b) ? "palindrome" : "not palindrome") << endl;
    return 0;
}
