// Question: Merge two adjacent sorted subarrays arr[low..mid] and arr[mid+1..high] in-place using temp storage.
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int arr1Start = low;
    int arr2Start = mid + 1;

    while (arr1Start <= mid && arr2Start <= high) {
        if (arr[arr1Start] > arr[arr2Start]) {
            temp.push_back(arr[arr2Start]);
            arr2Start++;
        } else {
            temp.push_back(arr[arr1Start]);
            arr1Start++;
        }
    }

    while (arr1Start <= mid) {
        temp.push_back(arr[arr1Start]);
        arr1Start++;
    }

    while (arr2Start <= high) {
        temp.push_back(arr[arr2Start]);
        arr2Start++;
    }

    int k = 0;
    for (int i = low; i <= high; i++) {
        arr[i] = temp[k++];
    }
}

int main() {
    vector<int> arr = {2, 5, 8, 12, 1, 3, 7, 10};
    int low = 0;
    int high = static_cast<int>(arr.size()) - 1;
    int mid = 3; // [0..3] is {2, 5, 8, 12}, [4..7] is {1, 3, 7, 10}

    cout << "Before merge: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    merge(arr, low, mid, high);

    cout << "After merge:  ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
