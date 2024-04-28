#ifndef CAT_HPP
#define CAT_HPP
#include <string>
#include "animal.hpp"
class Cat:public Animal{
    std::string voice() const override;
};
#endif // CAT_HPP