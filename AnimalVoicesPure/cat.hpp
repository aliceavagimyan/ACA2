#ifndef CAT_HPP
#define CAT_HPP
#include <string>
#include "animal.hpp"
class Cat:public Animal{
    public:
    std::string voice() const override;
    int age() const override;
    int weight()const override;
    Cat(const int& age,const  int& weight) : Animal(age, weight),m_age(age), m_weight(weight) {}
    private:
    int  m_age;
    int m_weight;


};
#endif // CAT_HPP