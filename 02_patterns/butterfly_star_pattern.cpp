// Question: Print a symmetric butterfly star pattern.
#include <iostream>
using namespace std;

void butterflyPattern(int n) {
    // Upper wings
    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= i; j--) cout << "* ";
        for (int j = 1; j < i; j++) cout << "  ";
        for (int j = 1; j < i; j++) cout << "  ";
        for (int j = i; j <= n; j++) cout << "* ";
        cout << endl;
    }
    // Lower wings
    for (int i = 2; i <= n; i++) {
        for (int j = n; j >= i; j--) cout << "* ";
        for (int j = 1; j < i; j++) cout << "  ";
        for (int j = 1; j < i; j++) cout << "  ";
        for (int j = i; j <= n; j++) cout << "* ";
        cout << endl;
    }
}

int main() {
    int n = 5;
    cout << "Butterfly Star Pattern:" << endl;
    butterflyPattern(n);
    return 0;
}
