// Question: Count the number of even and odd digits in a given integer.
#include <cstdlib>
#include <iostream>
using namespace std;

void countEvenOddDigits(int number) {
    if (number == 0) {
        cout << "Even digits: 1, Odd digits: 0" << endl;
        return;
    }
    number = abs(number);
    int even = 0, odd = 0;
    while (number != 0) {
        int lastDigit = number % 10;
        if (lastDigit % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        number /= 10;
    }
    cout << "Even digits: " << even << ", Odd digits: " << odd << endl;
}

int main() {
    int num = 12332;
    cout << "For " << num << " -> ";
    countEvenOddDigits(num);
    return 0;
}
