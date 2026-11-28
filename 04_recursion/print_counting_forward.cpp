// Question: Print counting forward from 1 to N (or a given range) using recursion.
#include <iostream>
using namespace std;

void printCountingForward(int n, int idx = 1) {
    if (idx > n) {
        return;
    }
    cout << idx << " ";
    printCountingForward(n, idx + 1);
}

void printRange(int start, int end) {
    if (start > end) {
        return;
    }
    cout << start << " ";
    printRange(start + 1, end);
}

int main() {
    cout << "Forward counting 1 to 5: ";
    printCountingForward(5);
    cout << endl;

    cout << "Range counting 5 to 10: ";
    printRange(5, 10);
    cout << endl;

    return 0;
}
