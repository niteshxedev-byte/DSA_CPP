class Solution {
private:
    void insertionSort(vector<int>& arr, int low, int high) {
        for (int i = low + 1; i <= high; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= low && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    void merge(vector<int>& arr, vector<int>& temp, int low, int mid, int high) {
        int leftSize = mid - low + 1;
        
        // 1. Only copy the left half into temp
        for (int i = 0; i < leftSize; i++) {
            temp[i] = arr[low + i];
        }

        int i = 0;        // Pointer for temp (left half)
        int j = mid + 1;  // Pointer for arr (right half)
        int k = low;      // Write pointer for arr

        while (i < leftSize && j <= high) {
            if (temp[i] <= arr[j]) {
                arr[k++] = temp[i++];
            } else {
                arr[k++] = arr[j++];
            }
        }

        // 2. Only copy remaining left elements (right elements are already in place)
        while (i < leftSize) {
            arr[k++] = temp[i++];
        }
    }

    void mergeSort(vector<int>& arr, vector<int>& temp, int low, int high) {
        // 3. Increased threshold to 32 for better cache efficiency
        if (high - low <= 32) {
            insertionSort(arr, low, high);
            return;
        }

        int mid = low + (high - low) / 2;
        mergeSort(arr, temp, low, mid);
        mergeSort(arr, temp, mid + 1, high);

        if (arr[mid] <= arr[mid + 1]) return;

        merge(arr, temp, low, mid, high);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        if (n > 1) {
            // 4. Temp only needs half the array size
            vector<int> temp((n + 1) / 2);
            mergeSort(nums, temp, 0, n - 1);
        }
        return nums;
    }
};
 