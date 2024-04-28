#ifndef COW_HPP
#define COW_HPP
#include <string>
#include "animal.hpp"
class Cow:public Animal{
    std::string voice() const override;
};
#endif // COW_HPP