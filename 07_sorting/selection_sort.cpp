// Algorithm: Selection Sort (O(N^2) time, O(1) auxiliary space)
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void selectionSort(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (vec[j] < vec[minIdx]) {
                minIdx = j;
            }
        }
        swap(vec[minIdx], vec[i]);
    }
}

void printVector(const vector<int>& vec) {
    for (int x : vec) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> vec = {23, 2, 24, 4, 6, 1};
    cout << "Before Selection Sort: ";
    printVector(vec);

    selectionSort(vec);

    cout << "After Selection Sort:  ";
    printVector(vec);
    return 0;
}
