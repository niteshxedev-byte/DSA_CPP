// Question: Print right-aligned (mirrored) alphabet triangles (column letters, row letters, reverse alphabet).
#include <iostream>
using namespace std;

void rightAlignedAlphabetCol(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) cout << "  ";
        for (int j = 0; j < i; j++) cout << static_cast<char>('A' + j) << " ";
        cout << endl;
    }
}

void rightAlignedAlphabetRow(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) cout << "  ";
        for (int j = 0; j <= i; j++) cout << static_cast<char>('A' + i) << " ";
        cout << endl;
    }
}

void rightAlignedReverseAlphabet(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) cout << "  ";
        char ch = static_cast<char>('A' + n - 1);
        for (int j = 0; j < i; j++) {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    cout << "Right-Aligned Alphabet Column Triangle:" << endl;
    rightAlignedAlphabetCol(n);

    cout << "\nRight-Aligned Alphabet Row Triangle:" << endl;
    rightAlignedAlphabetRow(n);

    cout << "\nRight-Aligned Reverse Alphabet Triangle:" << endl;
    rightAlignedReverseAlphabet(n);

    return 0;
}
