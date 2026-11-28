// Question: Count the total number of zeros and ones in a binary array.
#include <iostream>
#include <utility>
using namespace std;

pair<int, int> countZerosAndOnes(const int arr[], int n) {
    int zeros = 0, ones = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 0) {
            ++zeros;
        } else if (arr[i] == 1) {
            ++ones;
        }
    }
    return {ones, zeros};
}

int main() {
    int binaryArr[] = {1, 0, 1, 1, 0};
    auto counts = countZerosAndOnes(binaryArr, 5);
    cout << "Ones: " << counts.first << ", Zeros: " << counts.second << endl;
    return 0;
}
