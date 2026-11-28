// Question: Find the minimum and maximum elements in an array/vector.
#include <iostream>
#include <vector>
using namespace std;

int findMax(const vector<int>& vec) {
    int maxVal = vec[0];
    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i] > maxVal) {
            maxVal = vec[i];
        }
    }
    return maxVal;
}

int findMin(const vector<int>& vec) {
    int minVal = vec[0];
    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i] < minVal) {
            minVal = vec[i];
        }
    }
    return minVal;
}

int main() {
    vector<int> vec = {2, 5, 4, 7, 5};
    cout << "Max: " << findMax(vec) << endl;
    cout << "Min: " << findMin(vec) << endl;
    return 0;
}
