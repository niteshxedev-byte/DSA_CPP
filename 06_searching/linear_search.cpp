#include <bits/stdc++.h>

using namespace std;

 

//  linear seach 0(n) time complexity lega in the worze condtion couz 
//bhut bure time me use array pura triverse krna padega (its good for smaller arrays but for big nope  couz algorithm ko utna ki time lagega..)
// triverse krna cheak krna h toh break nhi toh pura aaray  and then nhi h -1  so for big arrays we use binary search jiski  time complexity O(logN) h
//  but we need sorted array (1,2,3,4,5) yh (6,5,4,3,2,1); 





void linear_Search_algo(vector<int> &vec_num , int target){ //function statement 
    int n = vec_num.size(); // taking the size 
    int idx = -1; // taking idx ( answer as -1)
    
    for(int i = 0 ;i<n;i++){ // making for loop to triverse the array 
        if(target == vec_num[i]){ // cheaking if target value is equal to array vlaue if yes put the index in idx variable and break  
        // if not  idx take -1 value
            idx = i; 
            break; // this make sure you can't triverse the whole array(vector)
        }
       
    }
    if(idx != -1){ //if idx is not equal to -1 print the idx (index ) if idx is equal to -1 ( basiclly else condtion ) print not found
        cout<<idx;
    }else{
        cout<<"not found";
    }
    
    

}





int main(){ 
    vector<int> vec_num ={12,35,3,2,5}; // initlize the vector
    int target ;// make target variable
    cout<<"Enter the value you want to find in the array: ";  //for printing input queestion
    cin>>target ; //putting user input in target variaable
linear_Search_algo(vec_num,target); //in the function pass vector anad target 


    return 0;

}