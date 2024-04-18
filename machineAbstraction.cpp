#include <iostream>
 class Car{
    public:
    std::string brand;
    std::string model;
    std::string engine;
    std::string steeringWheel;
    std::string color;
    std::string gearbox;
    std::string interiorColor;
    unsigned int run ; 

 };
 int main(){
    Car myCar;
    myCar.brand="Mercedes-Benz";
    myCar.model="GLC-Class";
    myCar.engine="petrol";
    myCar.steeringWheel="On the left";
    myCar.color="White";
    myCar.gearbox="Authomatic";
    myCar.interiorColor="beige";
    myCar.run=35000;
    return 0;
 }