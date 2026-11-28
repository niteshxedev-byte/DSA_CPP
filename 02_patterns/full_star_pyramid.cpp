// Question: Print centered full star pyramid and inverted full star pyramid patterns.
#include <iostream>
using namespace std;

void fullStarPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedStarPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    cout << "Full Star Pyramid:" << endl;
    fullStarPyramid(n);

    cout << "\nInverted Star Pyramid:" << endl;
    invertedStarPyramid(n);

    return 0;
}
