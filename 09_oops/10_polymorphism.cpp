// ! polymorphism 



#include <iostream>
using namespace std;


class Add{
    public: 
    int sum(int a,int b,int c){
        return a+b+c;
    }
    double sum(double a,double b,double c){
        return  a+b+c;
    }
};

int main(){
    Add x;
   double ans = x.sum(5.53,2.45,4.34);
   cout<<ans<<endl;
   
    return 0;
}