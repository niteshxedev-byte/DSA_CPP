#include <iostream>
#include <vector>
using namespace std;

void vector_iterations(vector<int> &vec) {
    // normal for loop
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i] << ",";
    }
    cout << endl;

    // range-based for loop
    for (int items : vec) {
        cout << items << ",";
    }
    cout << endl;

    // AFTER pop_back()
    vec.pop_back();
    cout << "after pop_back()" << endl;

    // iteration after pop_back
    for (int items : vec) {
        cout << items << ",";
    }
    cout << endl;
}

int main() {
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    vector_iterations(vec);
    return 0;
}