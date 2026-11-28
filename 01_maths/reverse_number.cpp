// Question: Reverse the digits of an integer.
#include <iostream>
using namespace std;

int reverseNumber(int number) {
    int revNumber = 0;
    while (number != 0) {
        int lastDigit = number % 10;
        revNumber = revNumber * 10 + lastDigit;
        number /= 10;
    }
    return revNumber;
}

int main() {
    int num = 12345;
    cout << "Reverse of " << num << ": " << reverseNumber(num) << endl;
    return 0;
}
