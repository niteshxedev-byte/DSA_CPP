// Question: Print N x N alphabet square patterns (column letters, row letters, offset grid starting from 'F').
#include <iostream>
using namespace std;

void alphabetColSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << static_cast<char>('a' + j) << " ";
        }
        cout << endl;
    }
}

void alphabetRowSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << static_cast<char>('a' + i) << " ";
        }
        cout << endl;
    }
}

void alphabetOffsetGrid(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n; j++) {
            cout << static_cast<char>('F' + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    cout << "Alphabet Column Square:" << endl;
    alphabetColSquare(n);

    cout << "\nAlphabet Row Square:" << endl;
    alphabetRowSquare(n);

    cout << "\nAlphabet Offset Grid (F..K):" << endl;
    alphabetOffsetGrid(n);

    return 0;
}
