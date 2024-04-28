#ifndef SHEEP_HPP
#define SHEEP_HPP
#include <string>
#include "animal.hpp"
class Sheep:public Animal{
    std::string voice() const override;
};
#endif // SHEEP_HPP