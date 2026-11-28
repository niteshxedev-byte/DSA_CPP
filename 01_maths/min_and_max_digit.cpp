// Question: Find the minimum and maximum digit in a given integer.
#include <cstdlib>
#include <iostream>
using namespace std;

int findMaxDigit(int number) {
    number = abs(number);
    if (number == 0) return 0;
    int maxDigit = 0;
    while (number != 0) {
        int lastDigit = number % 10;
        if (lastDigit > maxDigit) {
            maxDigit = lastDigit;
        }
        number /= 10;
    }
    return maxDigit;
}

int findMinDigit(int number) {
    number = abs(number);
    if (number == 0) return 0;
    int minDigit = 9;
    while (number != 0) {
        int lastDigit = number % 10;
        if (lastDigit < minDigit) {
            minDigit = lastDigit;
        }
        number /= 10;
    }
    return minDigit;
}

int main() {
    int num = 129123;
    cout << "Number: " << num << endl;
    cout << "Max digit: " << findMaxDigit(num) << endl;
    cout << "Min digit: " << findMinDigit(num) << endl;
    return 0;
}
