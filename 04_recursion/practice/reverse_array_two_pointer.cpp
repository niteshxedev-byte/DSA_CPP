#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void revrsed_Arry_using_recrussion_two_pointer(vector <int> &arr ,int r, int l ){
    
     if(l>=r){
      return ;  
     }
     swap(arr[l],arr[r]);
     revrsed_Arry_using_recrussion_two_pointer(arr,r-1,l+1 );
}

void printvector(const vector<int> &arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    vector <int> arr={23,4,52,46,4};
   
    int n = arr.size()-1;
    
revrsed_Arry_using_recrussion_two_pointer(arr,n,0);
    printvector(arr);

    
    return  0;
}