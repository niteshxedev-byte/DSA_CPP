#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void linearSearch(vector <int> &arr ,int n ,int target,int idx){
     // Base case 1: target found
     if(arr[idx]==target){
         cout<<idx<<endl;
         return ;  
     }
     // Base case 2: reached end of search space without finding target
     if(idx >= n){
         cout<<"Element not found"<<endl;
         return;
     }
    
     linearSearch(arr,n,target,idx+1);
}



int main(){
    vector <int> arr={23,4,52,46,4};
   
    int n = arr.size()-1;
    int target =  46;

linearSearch(arr,n,target,0);
  

    
    return  0;
}