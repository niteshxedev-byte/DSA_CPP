#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void linearSearch(vector <int> &arr ,int n ,int target,int idx){
    
     if(arr[idx]==target){
         cout<<idx;
      return ;  
         
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