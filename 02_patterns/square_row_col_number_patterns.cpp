// Question: Print N x N number square patterns (row numbers, column numbers, reverse columns, continuous counting).
#include <iostream>
using namespace std;

void rowNumberSquare(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void colNumberSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void reverseColSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void continuousCountingSquare(int n) {
    int counter = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << counter++ << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    cout << "Row Number Square:" << endl;
    rowNumberSquare(n);

    cout << "\nColumn Number Square:" << endl;
    colNumberSquare(n);

    cout << "\nReverse Column Number Square:" << endl;
    reverseColSquare(n);

    cout << "\nContinuous Counting Square:" << endl;
    continuousCountingSquare(n);

    return 0;
}
