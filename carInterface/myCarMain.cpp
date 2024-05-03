#include "car.hpp"
#include "myCar.hpp"
#include <iostream>
int main(){
    MyCar car("Mercedes",2005);
    car.getModel();
    car.getYear();
    car.turnLeft();
    car.turnRight();
    car.honk();
    car.refuel();

    return 0;
}