// Question: Print half-pyramid number triangles (1..i, row repeated, i..1, inverted 1..n-i, descending from N, starting at 10).
#include <iostream>
using namespace std;

void increasingNumberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void repeatedRowNumberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void reverseCountTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void invertedNumberTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void descendingFromNTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << (n + 1 - j) << " ";
        }
        cout << endl;
    }
}

void startingAtTenTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 10; j <= 10 + i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    cout << "Increasing Number Triangle:" << endl;
    increasingNumberTriangle(n);

    cout << "\nRepeated Row Number Triangle:" << endl;
    repeatedRowNumberTriangle(n);

    cout << "\nReverse Count Triangle (i down to 1):" << endl;
    reverseCountTriangle(n);

    cout << "\nInverted Number Triangle:" << endl;
    invertedNumberTriangle(n);

    cout << "\nDescending From N Triangle:" << endl;
    descendingFromNTriangle(n);

    cout << "\nStarting at 10 Triangle:" << endl;
    startingAtTenTriangle(n);

    return 0;
}
