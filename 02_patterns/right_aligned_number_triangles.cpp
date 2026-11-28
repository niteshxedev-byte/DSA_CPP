// Question: Print right-aligned (mirrored) number triangles (row numbers, col numbers, reverse numbers, descending from N).
#include <iostream>
using namespace std;

void rightAlignedRowNumber(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << i << " ";
        cout << endl;
    }
}

void rightAlignedColNumber(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << j << " ";
        cout << endl;
    }
}

void rightAlignedReverseNumber(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) cout << "  ";
        for (int j = i; j >= 1; j--) cout << j << " ";
        cout << endl;
    }
}

void rightAlignedDescendingFromN(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) cout << "  ";
        for (int j = n; j > n - i; j--) cout << j << " ";
        cout << endl;
    }
}

int main() {
    int n = 5;
    cout << "Right-Aligned Row Number Triangle:" << endl;
    rightAlignedRowNumber(n);

    cout << "\nRight-Aligned Column Number Triangle:" << endl;
    rightAlignedColNumber(n);

    cout << "\nRight-Aligned Reverse Number Triangle:" << endl;
    rightAlignedReverseNumber(n);

    cout << "\nRight-Aligned Descending From N Triangle:" << endl;
    rightAlignedDescendingFromN(n);

    return 0;
}
