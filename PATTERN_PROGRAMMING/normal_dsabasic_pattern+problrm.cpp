#include <iostream>
using namespace std;

void printStrSQ(int n){
    for(int i  =0 ;i<n ;i++){
        for(int j =0; j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl; 
    }
}


void  printtenSQ(int n ){

for(int i =0 ;i<n;i++){
    for(int j =0 ; j<n ;j++){
        cout<<10<<" ";
    }
    cout<<endl; 
}

}

void printPatternThree(int n){

        for(int  i  =1 ; i<=n ;i++){
            for(int j = 0 ; j<n ;j ++){
                cout<<i<<" "; 
            }
             cout<<endl; 
        }
    
}

void printPatternFour(int n){
for(int i = 0 ;i<n;i++){
    for(int j = 1 ; j<=n;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
}

void printPatternFive(int n){
for(int i = 0 ;i<n;i++){
    for(int j = 5; j>=1;j--){
        cout<<j<<" ";
    }
    cout<<endl;
}
}


void  printPatternSix(int n){
    for(int i=1 ; i<=n;i++){
        for(int  j  =0 ;j<n;j++){
        char ch = 'a' + j ;
        cout<<ch<<" ";
        }
        cout<<endl; 
    }
}


void  printPatternSeven(int n){
    for(int i=0 ; i<n;i++){
        for(int  j  =0 ;j<n;j++){
        char ch = 'a' + i;
        cout<<ch<<" ";
        }
        cout<<endl; 
    }
}


void  printPatternEight(int n){
    for(int i=0 ; i<n;i++){
        for(int  j  =1 ;j<=n;j++){
        cout<<j*j<<" ";
        }
        cout<<endl; 
    }
}



void printPatternNine(int n){ int a = 1;
      for(int i=0 ; i<n;i++){
    
        for(int  j  =1 ;j<=n;j++){   
        cout<<a<<" ";
        a++;
        }
        cout<<endl; 
    }
}


void printPatternTen(int n ){

for(int  i = 0  ;i < n ; i++ ){
    for (int j  = 0 ; j<n;j++){
        cout<<4<<" ";
    }
    cout<<endl;
}
}


void printPatternEleven(int n){
    for(int  i = 0  ;i < n ; i++ ){
    for (int j  = 1; j<=n;j++){
        cout<<j*j*j<<" ";
    }
    cout<<endl;
}
}


void printPatternTweelve(int n){
    for(int  i = 0  ;i < n ; i++ ){
    for (int j  = 0; j<=n;j++){
        char ch  = 'F' +j;
        cout<<ch << " ";
    }
    cout<<endl;
}
}

int main(){

    int n  =5 ;
    // printStrSQ(n);
    // printtenSQ( n );
    // printPatternThree( n);
    // printPatternFour(n); 
    //  printPatternFive( n);
    //  printPatternSix(n);
    // printPatternSeven(n);
// printPatternEight( n);
// printPatternNine(n);
// printPatternTen(n);
//  printPatternEleven(n);
printPatternTweelve(n);
    return 0;
    
}