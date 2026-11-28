// Question: Print a right-angled star triangle and an inverted star triangle.
#include <iostream>
using namespace std;

void rightAngledStarTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedStarTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    cout << "Right-Angled Star Triangle:" << endl;
    rightAngledStarTriangle(n);

    cout << "\nInverted Star Triangle:" << endl;
    invertedStarTriangle(n);

    return 0;
}
