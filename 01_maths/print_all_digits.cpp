// Question: Extract and print all digits of a given integer.
#include <cstdlib>
#include <iostream>
using namespace std;

void printAllDigits(int number) {
    if (number == 0) {
        cout << 0 << endl;
        return;
    }
    number = abs(number);
    while (number != 0) {
        int digit = number % 10;
        cout << digit << " ";
        number /= 10;
    }
    cout << endl;
}

int main() {
    int num = 12332;
    cout << "Digits of " << num << " (right to left): ";
    printAllDigits(num);
    return 0;
}
