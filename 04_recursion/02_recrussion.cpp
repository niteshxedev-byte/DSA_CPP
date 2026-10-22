#include <bits/stdc++.h>
using namespace std;

void printcountingREV(int n){
    if(n==0){
        return ;
    }
    cout<<n<<",";
printcountingREV(n-1);
}


void printcountingFwd(int n , int idx = 1 ){
    if(idx >n){
        return;
    }
    cout<<idx<<",";
    printcountingFwd(n,idx+1);
}


int calculateSUM(vector<int> &nums,int size ){
    if(size==0){
        return 0;
    }

   return nums[size-1] + calculateSUM(nums,size-1);
}

double calculateAvg(vector<int> &nums,int size ){
    if(size==0){
        return 0.0;
    }
  int sum =  calculateSUM(nums,size);
        return static_cast<double>(sum)/size;
}

int calculatefactorialREC(int n){
    if(n==0){
        return 1;
    }
    
    
 return n*calculatefactorialREC(n-1);
}

int main(){

int n  =3;
// printcountingREV(n);
cout<<endl;
// printcountingFwd(n);
// calculate factorial
cout<< calculatefactorialREC(n);


cout<<endl;
vector<int> nums={1,2,3,4,5};
int size = nums.size();
// cout<<calculateSUM(nums,size);
// cout<<endl;
// cout<<calculateAvg(nums,size);


    return 0 ;
}

