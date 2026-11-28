// Question: Calculate the sum of all digits of an integer.
#include <cstdlib>
#include <iostream>
using namespace std;

int sumOfDigits(int number) {
    int sum = 0;
    number = abs(number);
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int num = 129123;
    cout << "Sum of digits of " << num << ": " << sumOfDigits(num) << endl;
    return 0;
}
