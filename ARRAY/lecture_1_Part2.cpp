#include <bits/stdc++.h>
using namespace std;

// Print each element of an integer array
void print_array_int(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ",";
    }
    cout << '\n';
}

// Print each element multiplied by 2
void print_array_int_twice_values(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << (arr[i] * 2) << ",";
    }
    cout << '\n';
}

// Print even and odd numbers separately
void print_even_odd_in_intarr(int arr[], int n) {
    cout << "Even numbers: ";
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << ",";
        }
    }
    cout << '\n';

    cout << "Odd numbers: ";
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << ",";
        }
    }
    cout << '\n';
}

// Count zeros and ones in a binary array
pair<int,int> print_zero_one_arr(int zero_one_arr[], int n) {
    int zero = 0, one = 0;
    for (int i = 0; i < n; ++i) {
        if (zero_one_arr[i] == 0)
            ++zero;
        else
            ++one;
    }
   return {one,zero};
}

// Linear search: returns index or -1
int linear_search_intarr(int arr[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// Multiply each element of a vector by 10 (in-place)
void multiply_each_element_by10(vector<int>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        vec[i] *= 10;
    }
}

void findmax(vector<int> &vec){
    int max = vec[0];
    for(int i =0 ;i<vec.size();i++){
        if(vec[i]>max){
            max = vec[i];
        }
    }
    cout<<max<<endl;
}

void findmin(vector<int> &vec){
    int min = vec[0];
    for(int i =0 ;i<vec.size();i++){
        if(vec[i]<min){
            min = vec[i];
        }
    }
    cout<<min<<endl;
}

int main() {
    const int n = 5;
    int arr[n] = {3, 7, 6, 2, 5};
    vector<int> vec = {2, 5, 4, 7, 5};
    int zero_one_arr[n] = {1, 0, 1, 1, 0};

    print_array_int_twice_values(arr, n);
    print_even_odd_in_intarr(arr, n);
  auto counts = print_zero_one_arr(zero_one_arr, n);
cout << "Ones: " << counts.first << ", Zeros: " << counts.second << endl;


    int idx = linear_search_intarr(arr, n, 7);
    if (idx != -1) {
        cout << "Found 7 at index " << idx << '\n';
    } else {
        cout << "7 not found" << '\n';
    }

    multiply_each_element_by10(vec);
    cout << "Vector after multiplication by 10: ";
    for (int v : vec) {
        cout << v << ",";
    }
    cout << '\n';


    findmax(vec); 
    findmin(vec);

    return 0;
}
