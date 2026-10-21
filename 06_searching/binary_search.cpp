#include <bits/stdc++.h>
using namespace std;

// Binary search function 
void binary_search(vector <int> &vec_num){
    int lft = 0;                  // left pointer zero pr set kiya
    int rt = vec_num.size()-1;    // right pointer vector ke last index pr set kiya
    int target = 7;               // target value set ki jise dhoondhna h
    int idx = -1;                 // answer variable, shuru me -1 liya (not found ke liye)

    // while loop jo tab tak chalega jab tak search space khatam nhi hoti (lft <= rt)
    while(lft <= rt){

        // mid index nikaala taaki integer overflow na ho
        int mid = lft + (rt - lft) / 2;

        // check kiya ki mid vaali value hi target h kya
        if(target == vec_num[mid]){
            idx = mid;   // agar mil gayi toh index ko idx me daala
            break;       // aur loop ko turant break kr diya taaki aage triverse na krna pade
        }

        // agar target mid vaali value se bada h
        if(target > vec_num[mid]){
            lft = mid + 1; // toh left pointer ko mid se ek aage badha diya (left half discard)
        }
        else{
            rt = mid - 1;  // agar target chota h toh right pointer ko mid se ek peeche kr diya (right half discard)
        }
    }

    // final answer print kiya (ya toh correct index print hoga ya fir -1)
    cout << idx;
}

int main(){
    vector <int> vec_num = {3,5,2,7,4,8,10,12,16,15,18}; // unsorted vector banaya
    
    // binary search lagane se pehle vector ko mandatory sort kiya
    sort(vec_num.begin(), vec_num.end());
    
    // sorted vector ko binary search function me pass kiya
    binary_search(vec_num);
    
    return 0;
}
