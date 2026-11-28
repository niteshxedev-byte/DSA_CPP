// Question: Print all even and odd numbers from 1 to N.
#include <iostream>
using namespace std;

void printEvenOneToN(int n) {
    cout << "Even (1 to " << n << "): ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void printOddOneToN(int n) {
    cout << "Odd (1 to " << n << "):  ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n = 10;
    printEvenOneToN(n);
    printOddOneToN(n);
    return 0;
}
