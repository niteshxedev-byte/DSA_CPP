// Question: Calculate the factorial N! iteratively.
#include <iostream>
using namespace std;

long long factorialIterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n = 5;
    cout << n << "! = " << factorialIterative(n) << endl;
    return 0;
}
