// Question: Print the multiplication table of N from 1 to 10.
#include <iostream>
using namespace std;

void printTable(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << (n * i) << endl;
    }
}

int main() {
    int n = 5;
    cout << "Multiplication table of " << n << ":" << endl;
    printTable(n);
    return 0;
}
