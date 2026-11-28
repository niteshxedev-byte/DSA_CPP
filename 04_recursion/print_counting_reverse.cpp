// Question: Print counting in reverse order from N down to 1 using recursion.
#include <iostream>
using namespace std;

void printCountingReverse(int n) {
    if (n <= 0) {
        return;
    }
    cout << n << " ";
    printCountingReverse(n - 1);
}

int main() {
    int n = 5;
    cout << "Reverse counting from " << n << " to 1: ";
    printCountingReverse(n);
    cout << endl;
    return 0;
}
