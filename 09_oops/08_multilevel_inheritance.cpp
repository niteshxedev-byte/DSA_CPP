

//? multi level inheritence


#include <iostream>
#include <string>
using namespace std;

class Vechical{
    private: 
    string vechiclId = "unknown";
    protected:
    int speed = 0;

    public:
    string  companyName ;


    // Vechical constructor 

    Vechical(string  companyName,string vechiclId, int speed){
        this->companyName = companyName;
        this->vechiclId = vechiclId;
        this->speed = speed;
        cout << "Vehicle bana" << endl;
    }


    // get vechiclId 

    string getvechiclId(){
        return this->vechiclId;
    }
    friend void showvechiclId(Vechical &v);
};

void showvechiclId(Vechical &v) {
    cout << "Chassis (friend se): " << v.vechiclId << endl;
}

class Car: public Vechical{
    private: 
    int price;
    public: 
    Car(int price ,string  companyName,string vechiclId, int speed):Vechical(  companyName, vechiclId,  speed){
        this->price = price;
        cout<<"car bna "<<endl;
    }

    int getprice(){
        return this->price;
    }

};

class SportsCar :public Car{
    private:
    int topspeed = 0;

    public: 
    SportsCar(int topspeed,int price ,string  companyName,string vechiclId, int speed):Car( price ,  companyName, vechiclId,  speed){
        this->topspeed = topspeed;
    }

    void turbo() {
        speed += 100; // protected member SportsCar me bhi chalega
        cout << "Turbo on! speed = " << speed << endl;
    }

    friend void showTopSpeed(SportsCar &s);
};
void showTopSpeed(SportsCar &s){
    cout<<"top speed "<<s.topspeed;
}






int main() {
    // Order: topspeed, price, companyName, vechiclId, speed
    SportsCar s1(340, 30000000, "Ferrari", "CH123", 40);

    s1.turbo();
    showvechiclId(s1);
    showTopSpeed(s1);
    cout << "Price: " << s1.getprice() << endl;
    cout << "ID (getter): " << s1.getvechiclId() << endl;

    return 0;
}