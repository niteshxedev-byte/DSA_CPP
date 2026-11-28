// Question: Print the first N numbers of the Fibonacci series (starting with 0, 1).
#include <iostream>
using namespace std;

void printFibonacci(int n) {
    long long t1 = 0, t2 = 1;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << t1 << " ";
            continue;
        }
        if (i == 2) {
            cout << t2 << " ";
            continue;
        }
        long long nxt = t1 + t2;
        t1 = t2;
        t2 = nxt;
        cout << nxt << " ";
    }
    cout << endl;
}

int main() {
    int n = 8;
    cout << "First " << n << " Fibonacci numbers: ";
    printFibonacci(n);
    return 0;
}
