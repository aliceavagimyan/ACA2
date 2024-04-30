#ifndef PIG_HPP
#define PIG_HPP
#include <string>
#include "animal.hpp"
class Pig:public Animal{
    public:
    std::string voice() const override;
    int age() const override;
    int weight()const override;
    Pig(int age, int weight) : Animal(age, weight),m_age(age), m_weight(weight) {}
    private:
    int  m_age;
    int m_weight;
};
#endif // PIG_HPP