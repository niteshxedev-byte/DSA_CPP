// Algorithm: Insertion Sort (O(N) best, O(N^2) worst, O(1) space)
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void insertionSort(vector<int>& vec) {
    int n = vec.size();
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && vec[j] < vec[j - 1]) {
            swap(vec[j - 1], vec[j]);
            j--;
        }
    }
}

void printVector(const vector<int>& vec) {
    for (int x : vec) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> vec = {23, 2, 24, 4, 6, 1};
    cout << "Before Insertion Sort: ";
    printVector(vec);

    insertionSort(vec);

    cout << "After Insertion Sort:  ";
    printVector(vec);
    return 0;
}
