// ! OOPS (OBJECT ORIENTED PROGRAMMING SYSTEMS )
// ! attribute  ==> variabes in class
// ! method ==> function in class


#include <iostream>
#include <string>
using namespace std;

class CarFactory {        //?  the class
public:                   //?  Access specifier
  string carName;         //? attribute string
  int numberOfCars;       //? attribute int
  string companyName;     //? attribute string
  string countryOfOrigin; //? attribute string
  void carHorn();         //? method
  int distanceMeter = 0;  //? attribute
  CarFactory() {
    this->carName = "unknown";
    this->numberOfCars = 0;
    this->companyName = "unknown";
    this->countryOfOrigin = "";
  }

  CarFactory(string carName, int numberOfCars, string companyName,
             string countryOfOrigin);

  void updateDistanceMeter(int newDistace);
};

//  ?BHR KIYE H CLASS SE CONSTRUCTOR KO
CarFactory::CarFactory(string carName, int numberOfCars, string companyName,
                       string countryOfOrigin) {
  this->carName = carName;
  this->numberOfCars = numberOfCars;
  this->companyName = companyName;
  this->countryOfOrigin = countryOfOrigin;
}

void CarFactory::updateDistanceMeter(int newDistace) {
  this->distanceMeter += newDistace;
}

void CarFactory::carHorn() {
  cout << this->carName << "  ka horn chla" << endl;
}

int main() {

  CarFactory a; 
  cout<<a.carName<<endl;
  CarFactory toyotaFortuner("fortuner", 500, "toyota", "japan");
  CarFactory toyotaHilux("hilux", 100, "toyota", "japan");

  toyotaFortuner.carHorn();
  toyotaHilux.carHorn();

  toyotaHilux.updateDistanceMeter(250);
  cout << toyotaHilux.carName << " distance: " << toyotaHilux.distanceMeter
       << endl;

  return 0;
}