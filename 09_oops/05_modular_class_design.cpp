// ! OOPS (OBJECT ORIENTED PROGRAMMING SYSTEMS )

// ! attribute  ==> variabes in class
// ! method ==> function in class
// ! access modifires ==> private , public

#include <iostream>
#include <string>
using namespace std;




class CarAgency {
private:
  int CarsAvailable;
  int CarsSell;

  // selling (user ne kese khrida)
  bool isEmi;
  string paymentMethod;
  string BuyerName;

public:
  string CompanyName;
  string CompanyOrigin;

  

  // CONSTRUCTOR FUCNTION
  CarAgency(string CompanyName, string CompanyOrigin, int CarsAvailable) {
    this->CompanyName = CompanyName;
    this->CompanyOrigin = CompanyOrigin;
    this->CarsAvailable = CarsAvailable;
    this->CarsSell = 0;
    this->isEmi = false;
  }

 

  bool buyCar(bool isEmi, string paymentMethod, string BuyerName) {
    if(this->CarsAvailable <=0){
      return false;
    }
    this->isEmi = isEmi;
    this->paymentMethod = paymentMethod;
    this->BuyerName = BuyerName;
    this->CarsAvailable--;
    this->CarsSell++;
    return true;
  }

  int  GetTotalCarsSold(){
   
    return this->CarsSell;
  }
  int Getstock(){
    return this->CarsAvailable;
  }
};


class Car{


    private:
  string cariD;
  string carName;
  string carType;
  string carColor;
  int settingCapacity;
  int SellingPriceOfCar;
  string dateOfManufacture;


  public: 
  Car(string cariD, string carName, string carType, string carColor,
              int settingCapacity, int SellingPriceOfCar,
              string dateOfManufacture) {
    this->cariD = cariD;
    this->carName = carName;
    this->carType = carType;
    this->carColor = carColor;
    this->settingCapacity = settingCapacity;
    this->SellingPriceOfCar = SellingPriceOfCar;
    this->dateOfManufacture = dateOfManufacture;
  }

  string getCarName() { return this->carName; }
  int getPrice() { return this->SellingPriceOfCar; }

};


class Buyer {
private:
  string BankName;
  
  int totalMoney;

public:
  string BuyerName;

  Buyer( string BuyerName, string BankName,int totalMoney){
    this->BankName =BankName;
    this->totalMoney = totalMoney;
    this->BuyerName =  BuyerName;
  }

  int getMoney(){
    return this->totalMoney;
  }

  bool canIBuy(int ammount){
    return  this->totalMoney >=ammount;

  }
  void pay(int ammount){
     this->totalMoney -= ammount;
  }


};


int main() {
  CarAgency toyota("toyota", "japan", 10);
  Car fortuner("fortuner_black_001", "fortuner", "SUV", "black", 8, 30000, "2024-05-20");

  Buyer nitesh("nitesh", "SBI", 50000000);

  cout << fortuner.getPrice() << endl;
  cout << boolalpha << nitesh.canIBuy(fortuner.getPrice()) << endl;

  if (nitesh.canIBuy(fortuner.getPrice())) {
    if (toyota.buyCar(false, "Bank transfer", nitesh.BuyerName)) {
      nitesh.pay(fortuner.getPrice());
      cout << nitesh.BuyerName << " ne " << fortuner.getCarName() << " khareed li" << endl;
    } else {
      cout << "Car stock khatam!" << endl;
    }
  } else {
    cout << nitesh.BuyerName << " not enough money to buy a " << fortuner.getCarName() << endl;
  }

  cout << "Paise bache: " << nitesh.getMoney() << endl;
  cout << "Sold: " << toyota.GetTotalCarsSold() << endl;
  cout << "Stock: " << toyota.Getstock() << endl;
  return 0;
}