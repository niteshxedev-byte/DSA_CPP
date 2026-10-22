#include <bits/stdc++.h>
using namespace std;

bool isVectorSorted(int *arr,int size) {
   if(size==0||size==1){
    return true;
   }

   if(arr[0]>arr[1]){
    return false;
   }

   else{
    bool xc = isVectorSorted(arr+1,size-1);
   return  xc;
   }
}


void printElementofarr(int *arr, int size ,int n){
   
    if(size==n){
        return ;
    }
 cout<<arr[n]<<",";

printElementofarr(arr,size , n+1);
}




int sumOFarr(int *arr, int size,int n ){
  if(size==n){
    return 0 ;
  }
 return arr[n] + sumOFarr(arr,size,n+1);;

}





int main() {
int arr[6] = {1, 2, 12, 5, 6, 7};
//   bool ans = isVectorSorted(arr,6);
  
//   if(ans){
    // cout<<"sorted"<<endl; 
//   }
//   else{
//     cout<<"not sorted"<<endl;
//   }
  int n = 0 ;
  int size =6;
  

// printElementofarr(arr,size , n);

cout <<sumOFarr(arr,size,n);

  return 0 ;
}
