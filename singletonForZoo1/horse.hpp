#ifndef HORSE_HPP
#define HORSE_HPP
#include <string>
#include "animal.hpp"
class Horse : public Animal {
public:
     Horse(const std::string& name) : Animal(name) {}
    std::string voice() const override ;
};

#endif // HORSE_HPP