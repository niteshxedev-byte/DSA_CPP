// Question: Print a right-aligned (mirrored) star triangle using leading spaces.
#include <iostream>
using namespace std;

void rightAlignedStarTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    cout << "Right-Aligned Star Triangle:" << endl;
    rightAlignedStarTriangle(n);
    return 0;
}
