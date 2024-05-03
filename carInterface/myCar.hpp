#ifndef MYCAR_HPP
#define MYCAR_HPP
#include <string>
#include "car.hpp"
class MyCar:public Car{
    public:
    MyCar(const std::string& model,const int& year): m_model(model),m_year(year){}
    std::string getModel()const  override;
    int getYear() const override;
     void turnLeft() const override;
     void turnRight() const override;
     void honk() const   override;
     void refuel()const override;
     private:
     std::string m_model;
     int m_year;
};
#endif //MYCAR_HPP