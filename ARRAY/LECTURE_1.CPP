#include <bits/stdc++.h>
using namespace std;



void garbage_array_fn(int n){
    	int arr[n];
	for(int i =0 ;i<n;i++){
	   cout<<arr[i]<<",";
	}
}

void print_array_int(int arr[],int n){
    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<",";
        
    }
}

void print_array_char(char arr[],int n){
    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<",";
        
    }
}


int main() {
    // 	int n = 5;
    // 	garbage_array_fn(n);
    // int arr[10];
    // cout<<"enter the value of n :";
    
    // int n;
    // cin>>n;
    
    // for(int i =0 ;i<n;i++){
    //     cout<<"taking input for ind "<<i<<endl;
    //     cin>>arr[i];
    // }
    //  print_array_int(arr,n);
     
    //  creating character ARRAY 
    
    char charr[5] ={'a','b','c','d','r'};
    
    print_array_char(charr,5);
   
    return 0 ;
}
