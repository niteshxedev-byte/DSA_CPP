// Question: Count the total number of digits in an integer (O(log10 N) time).
#include <cstdlib>
#include <iostream>
using namespace std;

int countDigits(int number) {
    if (number == 0) {
        return 1;
    }
    number = abs(number);
    int count = 0;
    while (number != 0) {
        count++;
        number /= 10;
    }
    return count;
}

int main() {
    int num = 12332;
    cout << "Number of digits in " << num << ": " << countDigits(num) << endl;
    cout << "Number of digits in 0: " << countDigits(0) << endl;
    return 0;
}
