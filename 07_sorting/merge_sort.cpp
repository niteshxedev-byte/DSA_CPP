#include <bits/stdc++.h>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
  // Write merge logic here
  vector<int> temp;
  int ARR1_START = low;
  int ARR2_START = mid + 1;

  int end = high;

  while (ARR1_START <= mid && ARR2_START <= end) {
    if (arr[ARR1_START] > arr[ARR2_START]) {
      temp.push_back(arr[ARR2_START]);
      ARR2_START = ARR2_START + 1;
    } else {
      temp.push_back(arr[ARR1_START]);
      ARR1_START = ARR1_START + 1;
    }
  }

  while (ARR1_START <= mid) {
    temp.push_back(arr[ARR1_START]);
    ARR1_START = ARR1_START + 1;
  }
  while (ARR2_START <= end) {
    temp.push_back(arr[ARR2_START]);
    ARR2_START = ARR2_START + 1;
  }

  int k = 0;

  for (int i = low; i <= end; i++) {
    arr[i] = temp[k];
    k = k + 1;
  };
}

void mergeSort(vector<int> &arr, int low, int high) {
  if (high > low) {
    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);      // left
    mergeSort(arr, mid + 1, high); // right

    merge(arr, low, mid, high); // merge
  }
  // Write recursive divide logic here
}

int main() {
  vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
  int n = arr.size();

  cout << "Before Merge Sort: ";
  for (int x : arr) cout << x << " ";
  cout << "\n";

  mergeSort(arr, 0, n - 1);

  cout << "After Merge Sort:  ";
  for (int x : arr) cout << x << " ";
  cout << "\n";

  return 0;
}
