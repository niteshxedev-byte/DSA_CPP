#include <bits/stdc++.h>
using namespace std;



int factorial_recrussion(int n){
    if(n==1){
        return 1;
    }
  return n*factorial_recrussion(n-1);
}

void print1to5_Recrussion(int n){
    if(n==0){
        return ;
    }
    cout<<n<<",";
    

    print1to5_Recrussion(n-1);
}

void print5to10_recrussion(int n){
    if(n ==11){
        return ;
    }
    cout<<n<<",";

    print5to10_recrussion(n+1);
}


void printvectorEL(vector <int> &vec, int n,int idx){
   
    if(n ==  idx){
        return ;
    }
    cout<<vec[idx]<<",";
    
    
    printvectorEL(vec,n,idx+1);
    
}

int main() {

// int n  =5; 
vector <int> vec = {20 , 32,3,53,34,5 } ;
int n = vec.size();
int idx = 0 ;

// cout<<factorial_recrussion(n);

// print1to5_Recrussion(n);
// print5to10_recrussion(n);
printvectorEL(vec, n,idx);

return 0;
}
