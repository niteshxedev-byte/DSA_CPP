`// !multiple inheritance
#include <iostream>
#include <string>
using namespace std;

class PetrolEngine {

private:
  string engineName = "unknown";
  string CC = "unknown";
  int fuelLevel = 50;

protected:
  void StartEngine() { cout << "engine start" << endl; };
  void PrintEnginedetails() {
    cout << "___Engine__Details___" << endl;
    cout << "ENGINE NAME :-> " << this->engineName << endl;
    cout << "FUEL LEVEl :-> " << this->fuelLevel << endl;
    cout << "ENGINE CC :-> " << this->CC << endl;
  }

public:
  PetrolEngine(string engineName, string CC, int fuelLevel) {
    this->engineName = engineName;
    this->CC = CC;
    this->fuelLevel = fuelLevel;
  }
};

class ElectricMotor {

private:
  string motorName = "unknown";
  string motorPower = "unknown";
  string batteryLevel = "Unknown";

protected:
  void startMotor() { cout << "motor start" << endl; };
  void PrintMotordetails() {
    cout << "___Motor__Details___" << endl;
    cout << "MOTOR NAME :-> " << this->motorName << endl;
    cout << "MOTOR POWER :-> " << this->motorPower << endl;
    cout << "BATTERY LEVEL :-> " << this->batteryLevel << endl;
  }

  public:
  ElectricMotor(string motorName, string motorPower, string batteryLevel) {
    this->motorName = motorName;
    this->motorPower = motorPower;
    this->batteryLevel = batteryLevel;
  }
};

class Hybridcar : public ElectricMotor, public PetrolEngine {
public:
  string carName = "unknown";

  Hybridcar(string carName, string motorName, string motorPower,
            string batteryLevel, string engineName, string CC, int fuelLevel)
      : ElectricMotor(motorName, motorPower, batteryLevel),
        PetrolEngine(engineName, CC, fuelLevel) {
    this->carName = carName;
    cout << "hybrid bna" << endl;
  }
  void startCar(string how = "motor") {
    if (how == "petrol") {
      StartEngine();
    } else {
      startMotor();
    }
  }

  void PrintHybridDetails() {
    cout << "______HybridDetails__________" << endl;
    cout<<"CAR NAME =>"<< this->carName<<endl;

    PrintEnginedetails();
    PrintMotordetails();
  }
};

int main() {
  Hybridcar tesla("teslaZ", "TESLA_MOTOR_DARK_MATTER", "5000TORQ", "100",
                  "MAHINDRA_5000CC", "5000CC", 5000);

  tesla.startCar();
  tesla.PrintHybridDetails();

  return 0;
}