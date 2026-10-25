#include <bits/stdc++.h>
using namespace std;


// exchange sort 
void exchange_sort(vector<int> &vec1){
    int n=vec1.size();
  for(int i = 0 ;i<n;i++){
    
    for(int j=i+1;j<n;j++){
        if(vec1[i]>vec1[j]){
            swap(vec1[i],vec1[j]);
        }
    }
  }
   
   

}

void selectionsort(vector<int> &vec1){
    int n=vec1.size();
  for(int i = 0 ;i<n-1;i++){
    int mini = i;
    for(int j=i;j<n;j++){
        if(vec1[mini]>vec1[j]){
            mini =  j;
        }
    }
     swap(vec1[mini],vec1[i]);
  }
   
   

}

void bubbleSort(vector<int> &vec1){
    int n = vec1.size();
    int blockswap  ;
    for(int i = 0 ;i<n;i++){
        blockswap = 0;
        for(int j =0 ;j<n-i-1;j++){
            if(vec1[j]>vec1[j+1]){
              swap(vec1[j],vec1[j+1]); 
                blockswap= 1 ;
            }
            
        }
        if(!blockswap){
            break;
        }
    }
  
}

void printvector(vector<int>&vec1){
     int n=vec1.size();

      for(int i = 0 ;i< n;i++){
       cout<<vec1[i]<<",";
        }
    
}

void insertionsort(vector<int>&vec1){
    int n =vec1.size();
    for(int i =1 ;i<n;i++){
        int j = i;
        while(j>0 && vec1[j]<vec1[j-1]){
              swap( vec1[j-1],vec1[j]);
                j--;
        }
    }
}



int main(){
    vector<int> vec1 = {23,2,24,4,6,1};
    // exchange_sort(vec1);
    // selectionsort(vec1);
    // bubbleSort(vec1);
    insertionsort(vec1);
    printvector(vec1);

   



return 0 ;
}