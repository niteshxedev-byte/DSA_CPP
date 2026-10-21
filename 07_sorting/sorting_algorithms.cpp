#include <bits/stdc++.h>
using namespace std;



void selectionSort(vector <int> &vec){
    int n = vec.size();
    for(int i = 0 ; i < n-1;i++){
        int min = i;
    for(int j= i+1; j < n ; j ++){
            if(vec[min]>vec[j]){
                min = j ;
            }

    }
    swap(vec[i],vec[min]);
    }
}


void bubbleSort(vector <int> &vec){
    int n =vec.size();
    for(int i =0 ;i<n-1;i++){
        bool isSWaped = false;

        for(int j = 0 ; j < n-i-1; j ++ ){
            if(vec[j]>vec[j+1]){
                isSWaped= true;
                swap(vec[j],vec[j+1]);
            }
        }
  if (!isSWaped){
break;
  }
            
    }
    
}

void printArray(vector<int> &vec) {
    for (int &val : vec) {
        cout << val << " ";
    }
    cout << endl;
}



int main(){

vector <int> vec={3,2,5,1,4};

// selectionSort(vec);
bubbleSort(vec);
printArray(vec);
    return 0;

}