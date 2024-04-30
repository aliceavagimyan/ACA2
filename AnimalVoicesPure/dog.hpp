#ifndef DOG_HPP
#define DOG_HPP
#include <string>
#include "animal.hpp"
class Dog:public Animal{
    public:
    std::string voice() const override;
    int age() const override;
    int weight()const override;
    Dog(int age, int weight) : Animal(age, weight),m_age(age), m_weight(weight) {}
    private:
    int  m_age;
    int m_weight;
};
#endif // DOG_HPP