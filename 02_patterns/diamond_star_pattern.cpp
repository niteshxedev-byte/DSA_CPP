// Question: Print a centered full diamond star pattern.
#include <iostream>
using namespace std;

void diamondStarPattern(int n) {
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) cout << "  ";
        for (int j = 0; j < 2 * i - 1; j++) cout << "* ";
        cout << endl;
    }
    // Lower half
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) cout << "  ";
        for (int j = 0; j < 2 * i - 1; j++) cout << "* ";
        cout << endl;
    }
}

int main() {
    int n = 5;
    cout << "Diamond Star Pattern:" << endl;
    diamondStarPattern(n);
    return 0;
}
