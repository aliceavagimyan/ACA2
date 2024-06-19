#include <iostream>
#include <unordered_map>
#include <string>

class Car {
public:
    Car(const std::string& make) : m_make(make) {}
    
    bool operator==(const Car& car) const {
        return m_make == car.m_make;
    }

    std::string m_make;
};

struct CarHash {
    int operator()(const Car& car) const {
        return std::hash<std::string>()(car.m_make);
    }
};

void findCarOwner(const std::unordered_map<Car, std::string, CarHash>& carOwners, const Car& searchCar) {
    auto it = carOwners.find(searchCar);
    if (it != carOwners.end()) {
        std::cout << "Owner of " << searchCar.m_make << " is " << it->second << std::endl;
    } else {
        std::cout << "Car not found!" << std::endl;
    }
}
int main() {
    std::unordered_map<Car, std::string, CarHash> carOwners;
    
    carOwners[Car("Toyota")] = "Ann";
    carOwners[Car("BMW")] = "Jane";

   findCarOwner(carOwners,Car("Toyota"));
    findCarOwner(carOwners,Car("BMW"));
    findCarOwner(carOwners,Car("Opel"));


    return 0;
}