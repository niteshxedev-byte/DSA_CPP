// Question: Print all proper factors (divisors excluding N itself) of a positive integer N.
#include <iostream>
using namespace std;

void printAllFactors(int n) {
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n = 12;
    cout << "Proper factors of " << n << ": ";
    printAllFactors(n);
    return 0;
}
