//! INHERITANCE (BASIC)


#include <iostream>
#include <pthread.h>
#include <string>

using namespace std;

class Vehical{
    public: 
        string companyName = "unknown";

         Vehical(string companyName){
            this->companyName = companyName;
         }
         void honk(){
            cout<<"gaadi kare peeepee "<<endl;
         }

        
};

class Car :public Vehical{
    public:
    string carName = "unknown";

   Car(string companyName,string carName):Vehical(companyName){
        this->carName = carName;
    }
     void honk(){
            cout<<"gaadi kare POOOOO "<<endl;
         }


};

class Truck : public Vehical{
    public: 
    int loadCapacity = 0;
    Truck(int loadCapacity,string companyName): Vehical(companyName){
        this->loadCapacity = loadCapacity;
    }

};


int main(){
    Car ford("ford","mustang");

    ford.honk();
    cout<<ford.companyName<<endl;

Truck tata(5000,"tata truck");
tata.honk();
cout<<tata.companyName<<endl;



  return 0;
}