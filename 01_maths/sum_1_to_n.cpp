// Question: Calculate the sum of the first N natural numbers (1 to N).
#include <iostream>
using namespace std;

int sumOneToN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n = 5;
    cout << "Sum from 1 to " << n << ": " << sumOneToN(n) << endl;
    return 0;
}
