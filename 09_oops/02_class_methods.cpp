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

  void updateDistanceMeter(int newDistace) {
    this->distanceMeter += newDistace;
  }
};

void CarFactory::carHorn() {
  cout << this->carName << "  ka horn chla" << endl;
}

int main() {

  CarFactory toyotaFortuner; // craete an obeect of car
  CarFactory toyotaHilux;    // craete an obeect of car

  //? access attribute and set values

  toyotaFortuner.carName = "fortuner";
  toyotaFortuner.companyName = "toyota";
  toyotaFortuner.countryOfOrigin = "japan";
  toyotaFortuner.numberOfCars = 500;
  toyotaFortuner.carHorn();
  cout << toyotaFortuner.distanceMeter << "Km" << endl;

  toyotaFortuner.updateDistanceMeter(200);
  cout << toyotaFortuner.distanceMeter << "Km" << endl;

  toyotaHilux.carName = "Hilux";
  toyotaHilux.companyName = "toyota";
  toyotaHilux.countryOfOrigin = "japan";
  toyotaHilux.numberOfCars = 100;
  toyotaHilux.carHorn();

  //  print the fortuner

  //   cout << "carname =>" << toyotaFortuner.carName << endl;
  //   cout << "companyname =>" << toyotaFortuner.companyName << endl;
  //   cout << "countryOfOrigin =>" << toyotaFortuner.countryOfOrigin << endl;
  //   cout << "numberOfCars  =>" << toyotaFortuner.numberOfCars << endl;

  return 0;
}