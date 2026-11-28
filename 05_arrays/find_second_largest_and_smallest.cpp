// Question: Find the second largest and second smallest distinct elements in an array in O(N) time.
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int findSecondLargest(const vector<int>& vec) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int val : vec) {
        if (val > largest) {
            secondLargest = largest;
            largest = val;
        } else if (val > secondLargest && val < largest) {
            secondLargest = val;
        }
    }
    return secondLargest;
}

int findSecondSmallest(const vector<int>& vec) {
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int val : vec) {
        if (val < smallest) {
            secondSmallest = smallest;
            smallest = val;
        } else if (val < secondSmallest && val > smallest) {
            secondSmallest = val;
        }
    }
    return secondSmallest;
}

int main() {
    vector<int> vec = {3, 5, 2, 7, 4, 0};
    cout << "Second largest:  " << findSecondLargest(vec) << endl;
    cout << "Second smallest: " << findSecondSmallest(vec) << endl;
    return 0;
}
