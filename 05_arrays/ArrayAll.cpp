#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &vec) {
    int n = vec.size();
    for (int i = 0; i < n; i++) {
        cout << vec[i] << ",";
    }
}


int printSumArr(vector <int> &vec){
    int n = vec.size();
    int ans =0 ;
    for(int i = 0 ;i<n;i++){
        ans = ans +vec[i];
    }
    return ans;
}

float printAvgArr(vector <int> &vec){
    int n = vec.size();
    int ans = 0;
    for(int i = 0 ;i<n;i++){
        ans = ans+vec[i];
    }
    return ans/n;
}

int printMaxInArr(vector <int> &vec){
    int n = vec.size();
    int max = vec[0];
    for(int i =1 ;i<n;i++){
        if(max<vec[i]){
            max = vec[i];
        }

    }
    return max;
}



int printMinInArr(vector <int> &vec){
    int n = vec.size();
    int min =vec[0];
    for(int i=1;i<n;i++){
        if(min>vec[i]){
            min = vec[i];
        }
    }
    return min;
}


int printSecondMaxInArr(vector <int> &vec){
    int n = vec.size();
    int max = vec[0];
    int secmax = 0 ;

    for(int i = 1 ;i<n;i++){
        if(vec[i]>max){
            secmax = max;
            max =vec[i];
        }
    }
    return secmax;
}

int printSecondMinInArr(vector <int> &vec){ // find out how its work 
    int n = vec.size();
    int min = vec[n-1];
    
    for(int i =n-2 ;i>0 ;i--){
        if(vec[i]<min){
            
            min = vec[i] ;
        }
    }
    return min;

}

int linearsEACRH(vector <int> &vec,int target){
    int n = vec.size();
    for(int i = 0 ;i<n;i++){
        if(vec[i]==target){
            return i ;
        }
    }
    return -1;
}



vector <int> revrseVector(vector <int> vec){
    vector <int> temp ;
    int n = vec.size();
    for(int i = n-1 ; i >=0 ;i--){
        temp.push_back(vec[i]);
    }
    return temp;
}



vector <int> revrseVector2(vector <int> &vec){
    int rt = vec.size()-1;
    int lft = 0;
    while(lft<rt){
        int temp = vec[rt];
        vec[rt]=vec[lft];
        vec[lft] =temp ;

        rt = rt -1;
        lft = lft +1;
    }
    return vec;
}

vector<int> copyVec(vector <int> &vec){
    vector <int> temp ;
    int n = vec.size();
    for(int i = 0 ; i< n;i++){
        temp.push_back(vec[i]);
    }
    return temp;
}


void selectionSort(vector<int> &vec){
    int n = vec.size();
    for(int i = 0 ;i<n-1;i++){
        int minIdx = i;
        for(int j =  i + 1 ; j<n;j++){
            if(vec[minIdx]>vec[j]){
                minIdx = j ;
            }
           
        }
         swap(vec[i],vec[minIdx]);

    }
}


void randomizeVector(vector<int> &vec) {
    int n = vec.size();
    // Seed the random generator using current time
    srand(time(0)); 
    
    for (int i = n - 1; i > 0; i--) {
        // Pick a random index from 0 to i
        int j = rand() % (i + 1);
        
        // Swap the current element with the random one
        swap(vec[i], vec[j]);
    }
}


void bubbleSort(vector <int> &vec){
    int n = vec.size();
    for(int i =0 ; i<n ;i++){
        for(int j = 0 ;  j<n-i-1;j++){
            if(vec[j+1]<vec[j]){
swap(vec[j],vec[j+1]);
            }
            
        }
    }
}

void insertionSort(vector <int> &vec){
    int n = vec.size();
    for(int i = 1 ; i<n ; i++){
        int key = vec[i];
        int j = i-1;
        while(j>=0 && vec[j]>key){
            vec[j+1]  = vec[j];
            j--;
        }
        vec[j+1]=key ;
    }
}



void exhangeSort(vector <int> &vec){
     int n = vec.size();
    for(int i = 0 ;i<n-1;i++){
        int minIdx = i;
        for(int j =  i + 1 ; j<n;j++){
            if(vec[minIdx]>vec[j]){
                swap(vec[j],vec[minIdx]);
            }
           
        }
    }

}

void palindrome(vector <int> &vec){
    int lft = 0;

    int rt = vec.size()-1;

    bool ans = true;
    
    while(lft<rt){
        if(vec[lft] != vec[rt]){
        ans=false ;
    break;
        }
        lft = lft +1;
        rt = rt -1;
       
        
    }
    
     if(ans){
        cout<<"palindrome";
     }else{
        cout<<"not palindrome";
     }
}


void arraySortedOrNot(vector <int> &vec){
    int n = vec.size();
    bool ans = true;
    for(int i =1;i<n-1;i++){
        if(vec[i-1]>vec[i]){
            ans=false;
            break;
        }

    }
    if(ans){
        cout<<"vector is sorted";
    
    }
    else{
        cout<<"vector is not sorted";
    }
    

}

int main() {
    // vector<int> myVector = {1, 2, 3, 4, 5};
//     printVector(myVector);
//     cout<<endl;
//    cout<<"sum of vector is :" << printSumArr(myVector);
//    cout<<endl;
//    cout<<"Avg of vector is :"<<printAvgArr(myVector);
//    cout<<endl;
//    cout<<"Find max :"<<printMaxInArr(myVector);
//    cout<<endl;
//    cout<<"Find min :"<<printMinInArr(myVector);
//    cout<<endl; 
//    cout<<"Find Second Max : "<<printSecondMaxInArr(myVector);
//    cout<<endl;
//    cout<<"Find second smallest :"<<printSecondMinInArr(myVector);
//    cout<<"linear Search index : "<<linearsEACRH(myVector,4);



//     part 2 

vector <int> part2vec = {3,5,2,7,4,0};

// revrse array 
// vector <int> revVec = revrseVector(part2vec);
//  printVector(revVec);
    
//     cout<<endl;

// // rev arr
// vector <int> revVEC2 = revrseVector2(part2vec);
// printVector(revVEC2);

// cout<<endl;
// COPY ARRAY 
vector <int> copy = copyVec(part2vec);
printVector(copy);


//  sorting 

// cout<<endl;
// selectionSort(copy);
// printVector(copy);

// cout<<endl;
// randomizeVector(copy);
// printVector(copy);

// cout<<endl;

// bubbleSort(copy);
// printVector(copy);

// cout<<endl;
// randomizeVector(copy);
// printVector(copy);

// cout<<endl;

// insertionSort(copy);
// printVector(copy);


// cout<<endl;
// randomizeVector(copy);
// printVector(copy);
cout<<endl;

exhangeSort(copy);
printVector(copy);


//  palindrome
vector <int> vec={1,2,2,2,2,1};
cout<<endl;
palindrome(vec);

// cheakif Array issorted or not 
cout<<endl;

arraySortedOrNot(part2vec);




    return 0;
}
