// Question: Randomly shuffle an array in O(N) time using the Fisher-Yates shuffle algorithm.
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void shuffleVector(vector<int>& vec) {
    int n = vec.size();
    srand(static_cast<unsigned int>(time(0)));

    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(vec[i], vec[j]);
    }
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};

    cout << "Before shuffle: ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    shuffleVector(vec);

    cout << "After shuffle:  ";
    for (int x : vec) cout << x << " ";
    cout << endl;

    return 0;
}
