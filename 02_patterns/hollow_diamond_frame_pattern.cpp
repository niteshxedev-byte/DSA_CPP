// Question: Print a hollow diamond cutout frame pattern with stars and middle spaces.
#include <iostream>
using namespace std;

void hollowDiamondFrame(int n) {
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) cout << "* ";
        for (int j = 1; j < i; j++) cout << "  ";
        for (int j = 1; j < i; j++) cout << "  ";
        for (int j = i; j <= n; j++) cout << "* ";
        cout << endl;
    }
    // Lower half
    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= i; j--) cout << "* ";
        for (int j = 1; j < i; j++) cout << "  ";
        for (int j = 1; j < i; j++) cout << "  ";
        for (int j = i; j <= n; j++) cout << "* ";
        cout << endl;
    }
}

int main() {
    int n = 5;
    cout << "Hollow Diamond Frame Pattern:" << endl;
    hollowDiamondFrame(n);
    return 0;
}
