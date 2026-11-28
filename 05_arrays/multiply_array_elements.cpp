// Question: Multiply/scale elements of an array (print doubled values, multiply vector by 10 in-place).
#include <iostream>
#include <vector>
using namespace std;

void printDoubledValues(const int arr[], int n) {
    cout << "Doubled values: ";
    for (int i = 0; i < n; ++i) {
        cout << (arr[i] * 2) << " ";
    }
    cout << '\n';
}

void multiplyByTenInPlace(vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        vec[i] *= 10;
    }
}

int main() {
    int arr[] = {3, 7, 6, 2, 5};
    printDoubledValues(arr, 5);

    vector<int> vec = {2, 5, 4, 7, 5};
    multiplyByTenInPlace(vec);
    cout << "Multiplied by 10: ";
    for (int v : vec) {
        cout << v << " ";
    }
    cout << '\n';

    return 0;
}
