// Question: Separate and print even and odd numbers from an integer array.
#include <iostream>
using namespace std;

void printEvenAndOdd(const int arr[], int n) {
    cout << "Even numbers: ";
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << '\n';

    cout << "Odd numbers:  ";
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << '\n';
}

int main() {
    int arr[] = {3, 7, 6, 2, 5};
    printEvenAndOdd(arr, 5);
    return 0;
}
