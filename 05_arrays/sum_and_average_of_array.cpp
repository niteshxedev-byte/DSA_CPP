// Question: Calculate the sum and average of all elements in an array/vector.
#include <iostream>
#include <vector>
using namespace std;

int calculateSum(const vector<int>& vec) {
    int sum = 0;
    for (int x : vec) {
        sum += x;
    }
    return sum;
}

double calculateAverage(const vector<int>& vec) {
    if (vec.empty()) return 0.0;
    return static_cast<double>(calculateSum(vec)) / vec.size();
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    cout << "Sum:     " << calculateSum(vec) << endl;
    cout << "Average: " << calculateAverage(vec) << endl;
    return 0;
}
