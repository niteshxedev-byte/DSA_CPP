#include <iostream>
#include <vector>

using namespace std;

// Selection sort function (Selection Sort ka function)
void selectionSort(vector<int>& vec) {
    int n = vec.size(); // array ka size lete hain
    for (int i = 0; i < n - 1; ++i) { // har position ke liye
        int minIndex = i; // minimum element ka index
        for (int j = i + 1; j < n; ++j) { // remaining unsorted part me search
            if (vec[j] < vec[minIndex]) {
                minIndex = j; // naya minimum mila
            }
        }
        if (minIndex != i) { // agar minimum current position se alag hai
            int temp = vec[i];
            vec[i] = vec[minIndex];
            vec[minIndex] = temp; // swap karte hain
        }
    }
}

// Bubble sort function (Bubble Sort ka function)
void bubbleSort(vector<int>& vec) {
    int n = vec.size(); // array ka size
    for (int i = 0; i < n - 1; ++i) { // har pass ke liye
        for (int j = 0; j < n - i - 1; ++j) { // pass ke andar comparison
            if (vec[j] > vec[j + 1]) { // agar current element bada hai
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp; // swap
            }
        }
    }
}

// Insertion sort function (Insertion Sort ka function)
void insertionSort(vector<int>& vec) {
    int n = vec.size(); // array ka size
    for (int i = 1; i < n; ++i) { // har element ke liye
        int key = vec[i]; // current element
        int j = i - 1;
        while (j >= 0 && vec[j] > key) { // agar previous element bada hai
            vec[j + 1] = vec[j]; // element ko right shift karte hain
            j = j - 1;
        }
        vec[j + 1] = key; // correct position pe insert
    }
}

// Function to print array (Array ko print karne ka function)
void printArray(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec1 = {64, 25, 12, 22, 11}; // unsorted array
    vector<int> vec2 = vec1; // copy
    vector<int> vec3 = vec1; // copy

    selectionSort(vec1);
    cout << "Selection Sort: ";
    printArray(vec1);

    bubbleSort(vec2);
    cout << "Bubble Sort: ";
    printArray(vec2);

    insertionSort(vec3);
    cout << "Insertion Sort: ";
    printArray(vec3);

    return 0;
}
