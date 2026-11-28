// Question: Print a centered palindrome number pyramid (1 / 1 2 1 / 1 2 3 2 1 ...).
#include <iostream>
using namespace std;

void palindromeNumberPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    cout << "Palindrome Number Pyramid:" << endl;
    palindromeNumberPyramid(n);
    return 0;
}
