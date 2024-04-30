#ifndef SHEEP_HPP
#define SHEEP_HPP
#include <string>
#include "animal.hpp"
class Sheep:public Animal{
    public:
    std::string voice() const override;
};
#endif // ShEEP_HPP