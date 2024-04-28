#ifndef DOG_HPP
#define DOG_HPP
#include <string>
#include "animal.hpp"
class Dog:public Animal{
    std::string voice() const override;
};
#endif // DOG_HPP