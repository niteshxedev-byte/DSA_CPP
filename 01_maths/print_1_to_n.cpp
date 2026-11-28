// Question: Print numbers from 1 to N using a loop.
#include <iostream>
using namespace std;

void printOneToN(int n) {
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n = 10;
    cout << "Numbers from 1 to " << n << ": ";
    printOneToN(n);
    return 0;
}
