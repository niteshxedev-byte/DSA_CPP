// Question: Find the factorial of a non-negative integer N using recursion.
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    cout << "Factorial of 0: " << factorial(0) << endl;
    cout << "Factorial of 3: " << factorial(3) << endl;
    cout << "Factorial of 5: " << factorial(5) << endl;
    return 0;
}
