#include <iostream>
using namespace std;

void pattern1(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << " " << " ";
    }

    for (int j = 0; j <2*i-1; j++) {
      cout << "*" << " ";
    }
    cout << endl;
  }
}

void pattern2(int n) {
  for (int i = 1; i <= n ; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << " " << " ";
    }
   
  
    for (int j = 1; j <=i; j++) {
    cout<< j <<" ";
    }
     
    for (int j = 1; j <=i-1; j++) {
    cout<< i-j<<" ";
    }
    cout << endl;
  }
}

void pattern3(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < i-1; j++) {
      cout << " " << " ";
    }
    for (int j = 2*n-i; j >=i; j--) {
      cout << "*"<< " ";
    }
       for (int j = 0; j < n-i; j++) {
      cout << " " << " ";
    }
    cout << endl;
  }
}

void patter4(int n) {
   for(int i = 1 ; i<=n ;i++){
       // top lft
        for(int j = n ;j>=i;j-- ){
           cout<<"*"<<" ";
       }
       // spaces
       for(int j = 1; j<i ;j++){
           cout<<"_"<<" ";
       }
       for(int j = 1; j<i ;j++){
           cout<<"_"<<" ";
       }
// top rt
        for(int j = i ;j<=n;j++ ){
           cout<<"*"<<" ";
       }



       cout<<endl;
    
     
   }
      for(int i = n ; i>=1 ;i--){
       // top lft
        for(int j = n ;j>=i;j-- ){
           cout<<"*"<<" ";
       }
       // spaces
       for(int j = 1; j<i ;j++){
           cout<<"_"<<" ";
       }
       for(int j = 1; j<i ;j++){
           cout<<"_"<<" ";
       }
// top rt
        for(int j = i ;j<=n;j++ ){
           cout<<"*"<<" ";
       }



       cout<<endl;
    
     
   }
}


int main() {
  int n = 5;

    // pattern1(n);
    // pattern2(n);
  pattern3(n);
  // patter4(n);
  // patter5(n);
  //  patter6(n); 
// patter7(n );

// patter8(n );
  return 0;
}