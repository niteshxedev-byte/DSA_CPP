#include <iostream>
using namespace std;

void pattern1(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << " " << " ";
    }

    for (int j = 0; j <= i; j++) {
      cout << "*" << " ";
    }
    cout << endl;
  }
}

void pattern2(int n) {
  for (int i = 1; i <= n - 1; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << " " << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout << i << " ";
    }
    cout << endl;
  }
}

void pattern3(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << " " << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void patter4(int n) {
  for (int i = 1; i <=n; i++) {

    for (int j = 0; j < n - i; j++) {
      cout << " " << " ";
    }
    for (int j = 0; j < i; j++) {
      char ch = 'A' + j;
      cout << ch << " ";
    }
    cout << endl;
  }
}

void patter5(int n) {
  for (int i =1 ; i <= n; i++) {
    for (int j = 0; j < n - i ; j++) {
      cout << " " << " ";
    }
    for (int j = i; j >=1; j--) {
      cout << j << " ";
    }
    cout << endl;
  }
}

void patter6( int n){
  for(int i = 0 ; i<n;i++){
    for(int j = 1;j<n-i;j++){
      cout<<"_"<<" ";
    }
     for(int j = 0;j<=i;j++){
      char ch  = 'A'+i ;
      cout<<ch<<" ";
    }
    cout<<endl;
  }
} 


void patter7(int n ){
  for(int  i = 0 ; i <=  n ; i++){

    for(int j = 0 ;j<n-i;j++){
      cout<<" "<<" ";
    }

char ch = 'A'+n-1;
    for(int j= 0 ; j<i;j++){
      

      cout<<ch<<" ";
      ch--;
    }
    cout<<endl;
  }
}


void patter8(int n ){
  for(int  i = 0 ; i <=  n ; i++){

    for(int j = 0 ;j<n-i;j++){
      cout<<" "<<" ";
    }

    for(int j= n ; j>n-i;j--){
      cout<<j<<" ";
    }
    cout<<endl;
  }
}


int main() {
  int n = 5;

  //   pattern1(n);
  //   pattern2(n);
  // pattern3(n);
  // patter4(n);
  // patter5(n);
  //  patter6(n); 
// patter7(n );

// patter8(n );
  return 0;
}