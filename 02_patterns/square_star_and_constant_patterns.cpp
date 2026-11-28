// Question: Print N x N solid star square and constant number squares (10s and 4s).
#include <iostream>
using namespace std;

void solidStarSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void constantNumberSquare(int n, int val) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    cout << "Solid Star Square:" << endl;
    solidStarSquare(n);

    cout << "\nConstant 10 Square:" << endl;
    constantNumberSquare(n, 10);

    cout << "\nConstant 4 Square:" << endl;
    constantNumberSquare(n, 4);

    return 0;
}
