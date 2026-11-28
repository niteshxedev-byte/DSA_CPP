// Question: Print N x N grids of squared numbers (j^2) and cubed numbers (j^3).
#include <iostream>
using namespace std;

void squaredNumbersGrid(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << (j * j) << " ";
        }
        cout << endl;
    }
}

void cubedNumbersGrid(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << (j * j * j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    cout << "Squared Numbers Grid:" << endl;
    squaredNumbersGrid(n);

    cout << "\nCubed Numbers Grid:" << endl;
    cubedNumbersGrid(n);

    return 0;
}
