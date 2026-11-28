// Question: Print half-pyramid alphabet triangles (row letters, column letters, and inverted alphabet triangle).
#include <iostream>
using namespace std;

void alphabetRowTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << static_cast<char>('a' + i) << " ";
        }
        cout << endl;
    }
}

void alphabetColTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << static_cast<char>('A' + j) << " ";
        }
        cout << endl;
    }
}

void invertedAlphabetTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << static_cast<char>('A' + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    cout << "Alphabet Row Triangle:" << endl;
    alphabetRowTriangle(n);

    cout << "\nAlphabet Column Triangle:" << endl;
    alphabetColTriangle(n);

    cout << "\nInverted Alphabet Triangle:" << endl;
    invertedAlphabetTriangle(n);

    return 0;
}
