// Algorithm: Quick Sort using Lomuto Partition (O(N log N) avg, O(N^2) worst, O(log N) stack space)
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIdx = partition(arr, low, high);
        quickSort(arr, low, pivotIdx - 1);
        quickSort(arr, pivotIdx + 1, high);
    }
}

int main() {
    vector<int> arr = {23, 2, 24, 4, 6, 1};
    cout << "Before Quick Sort: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    quickSort(arr, 0, static_cast<int>(arr.size()) - 1);

    cout << "After Quick Sort:  ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
