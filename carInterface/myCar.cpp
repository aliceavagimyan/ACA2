#include "myCar.hpp"
#include <iostream> 
std::string MyCar::getModel()const {
    std::cout<<"Model:"<<m_model<<std::endl;
    return m_model;

}
     int MyCar::getYear() const {
       std::cout<<"Year:"<<m_year<<std::endl;
       return m_year;
     }
     void MyCar::turnLeft() const {
        std::cout<<"turned left:"<<std::endl;
     }
     void MyCar::turnRight() const {
         std::cout<<"turned right:"<<std::endl;
     }
     void MyCar::honk() const {
        std::cout<<"car is honking"<<std::endl;
     } 
     void MyCar::refuel()const{
        std::cout<<"car is refueling"<<std::endl;
     }