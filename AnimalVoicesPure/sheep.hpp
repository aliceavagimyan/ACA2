#ifndef SHEEP_HPP
#define SHEEP_HPP
#include <string>
#include "animal.hpp"
class Sheep:public Animal{
    public:
    std::string voice() const override;
    int age() const override;
    int weight()const override;
    Sheep(int age, int weight) : Animal(age, weight),m_age(age), m_weight(weight) {}
    private:
    int  m_age;
    int m_weight;
};
#endif // ShEEP_HPP