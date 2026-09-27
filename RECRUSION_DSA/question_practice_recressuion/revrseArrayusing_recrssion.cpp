#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void revrsed_Arry_using_extraArray(vector <int> &arr ,vector <int>&newRevrsedArray,int n){
         if(n<0){
             return;
         }
    newRevrsedArray.push_back(arr[n]);
    revrsed_Arry_using_extraArray(arr,newRevrsedArray,n-1);
}

void printvector(vector<int> &newRevrsedArray) {
    for (size_t i = 0; i < newRevrsedArray.size(); i++) {
        cout << newRevrsedArray[i] << " ";
    }
    cout << endl;
}

int main(){
    vector <int> arr={23,4,52,46,4};
    vector <int> newRevrsedArray ;
    int n = arr.size()-1;
    
    
revrsed_Arry_using_extraArray(arr,newRevrsedArray,n);
    printvector(newRevrsedArray);

    
    return  0;
}
