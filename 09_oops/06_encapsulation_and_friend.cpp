//? ENCAPSULATION
//! ATTRIBUTES KO PRIVATE RAKHO OR PUBLIC MAIN SETER FUNCTION KA USE KR KE VALUE
//! SET KRO
// ! MTHODS KA USE KR KE VALUES LO


//! Friend kya hai

// !friend ek permission hai. Class apne private aur protected members tak access ek bahar ke function ya class ko deti hai. Friend class ka member nahi hota.



#include <iostream>
#include <string>
using namespace std;

// class Account{
//     public:
//     int balance;

// };

// int main(){
// Account a;
// a.balance = 100;

// a.balance = -200;

// cout<<a.balance<<endl;

//     return 0;
// }

// ! issue yh h  ki user ko access mila class nahi rok rahi
// solution private ka use kro

class Account {
private:
  int balance = 0;

public:


  bool addBalance(int ammount) {
    if (ammount <= 0) {
      return false;
    }
    this->balance += ammount;
    return true;
  }



  bool subtractBalance(int ammount) {

    if (ammount <= 0 || this->balance <= 0 || ammount > this->balance) {
      return false;
    }
    this->balance -= ammount;
    return true;




  }


  // getter fns 
  int getbalance(){
    return this->balance;
  }



   friend void SubBalance(Account &acc,int ammount);
    friend void addBalance(Account &acc,int ammount);
};



void addBalance(Account &acc,int ammount){
      if(acc.addBalance(ammount)){
        cout<<"Ammount ADDED" << acc.getbalance();
    }
      else{
    cout<<"error in addition of amount ";
    }
}

void SubBalance(Account &acc,int ammount){
     if (acc.subtractBalance(ammount)){
         cout<<"Ammount subtract" << acc.getbalance();
   
   }
     else{
    cout<<"error in subtration of amount ";
   }
}





int main(){

    Account nitesh;

    addBalance(nitesh,5000);
    cout<<endl;
    SubBalance(nitesh,2000 );
  

   
    return 0; 
}