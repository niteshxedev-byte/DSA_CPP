// Algorithm: Bubble Sort with early-exit swap flag (O(N) best, O(N^2) worst, O(1) space)
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void printVector(const vector<int>& vec) {
    for (int x : vec) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> vec = {23, 2, 24, 4, 6, 1};
    cout << "Before Bubble Sort: ";
    printVector(vec);

    bubbleSort(vec);

    cout << "After Bubble Sort:  ";
    printVector(vec);
    return 0;
}
