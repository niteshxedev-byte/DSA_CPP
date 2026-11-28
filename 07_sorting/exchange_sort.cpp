// Algorithm: Exchange Sort (O(N^2) time, O(1) space)
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void exchangeSort(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (vec[i] > vec[j]) {
                swap(vec[i], vec[j]);
            }
        }
    }
}

void printVector(const vector<int>& vec) {
    for (int x : vec) cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> vec = {23, 2, 24, 4, 6, 1};
    cout << "Before Exchange Sort: ";
    printVector(vec);

    exchangeSort(vec);

    cout << "After Exchange Sort:  ";
    printVector(vec);
    return 0;
}
