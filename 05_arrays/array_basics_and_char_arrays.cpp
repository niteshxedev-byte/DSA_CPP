// Topic: Array basics — static int arrays, garbage values in uninitialized arrays, and char arrays.
#include <iostream>
using namespace std;

void printUninitializedDemo(int n) {
    int arr[10]; // Uninitialized stack array holds garbage values
    for (int i = 0; i < n && i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printIntArray(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printCharArray(const char arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int nums[5] = {10, 20, 30, 40, 50};
    cout << "Int array:  ";
    printIntArray(nums, 5);

    char chars[5] = {'a', 'b', 'c', 'd', 'r'};
    cout << "Char array: ";
    printCharArray(chars, 5);

    cout << "Uninitialized stack demo: ";
    printUninitializedDemo(5);

    return 0;
}
