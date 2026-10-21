#include <iostream>
using namespace std;

void printStrSQ(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << "*" << " ";
    }
    cout << endl;
  }
}

void printtenSQ(int n) {

  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= i + 1; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void printPatternThree(int n) {

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i << " ";
    }
    cout << endl;
  }
}

void printPatternFour(int n) {

  for (int i = 1; i <= n; i++) {   // Fixed: i < n to i <= n
    for (int j = i; j >= 1; j--) { // Fixed: j <= 1 to j >= 1
      cout << j << " ";
    }
    cout << endl;
  }
}

void printPatternFive(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      char ch = 'a' + i;
      cout << ch << " ";
    }
    cout << endl;
  }
}

void printPatternSix(int n) {

  for (int i = 0; i < n; i++) {
    for (int j = 1; j < n - i + 1; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void printPatternSeven(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < n - i + 1; j++) {
      cout << "*" << " ";
    }
    cout << endl;
  }
}

void printPatternEight(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << (n + 1) - j << " ";
    }
    cout << endl;
  }
}

void printPatternNine(int n) {
  for (int i = 0; i <= n + 2; i++) {
    for (int j = 1; j <= i; j++) {
      if (j == 7) {
        cout << " ";
      } else {
        cout << j << " ";
      }
    }
    cout << endl;
  }
}

void printPatternTen(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      char ch = 'A' + j;
      cout << ch << " ";
    }
    cout << endl;
  }
}

void printPatternEleven(int n) {
  for (int i = 0; i <= n; i++) {
    for (int j = 10; j <= 10 + i; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void printPatternTweelve(int n) {
  for(int i = 1 ; i<n ; i++){
    for(int j =n ;j>i ;j --){
      char ch = 'A'+ n-j;
      cout<<ch<<" ";
    }
    cout <<endl;
  }
}

int main() {

  int n = 5;
  // printStrSQ(n);
  // printtenSQ( n );
  // printPatternThree( n);
  // printPatternFour(n);
  // printPatternFive(n);
  //  printPatternSix(n);
  //  printPatternSeven(n);
  // printPatternEight(n);
  // printPatternNine(n);
  // printPatternTen(n);
  // printPatternEleven(n);
  printPatternTweelve(n);
  return 0;
}