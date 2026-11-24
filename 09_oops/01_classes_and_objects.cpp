// ! OOPS (OBJECT ORIENTED PROGRAMMING SYSTEMS )

#include <iostream>
#include <string>
using namespace std;

class CarFactory {    //?  the class
public:               //?  Access specifier
  string carName;     //? attribute string
  int numberOfCars;   //? attribute int
  string companyName; //? attribute string
  string countryOfOrigin;
};

int main() {

  CarFactory toyotaFortuner; // craete an obeect of car
  CarFactory toyotaHilux;    // craete an obeect of car

  //? access attribute and set values

  toyotaFortuner.carName = "fortuner";
  toyotaFortuner.companyName = "toyota";
  toyotaFortuner.countryOfOrigin = "japan";
  toyotaFortuner.numberOfCars = 500;

  toyotaHilux.carName = "Hilux";
  toyotaHilux.companyName = "toyota";
  toyotaHilux.countryOfOrigin = "japan";
  toyotaHilux.numberOfCars = 100;

  //  print the fortuner

  cout << "carname =>" << toyotaFortuner.carName << endl;
  cout << "companyname =>" << toyotaFortuner.companyName << endl;
  cout << "countryOfOrigin =>" << toyotaFortuner.countryOfOrigin << endl;
  cout << "numberOfCars  =>" << toyotaFortuner.numberOfCars << endl;

  return 0;
}