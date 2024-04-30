#ifndef PIG_HPP
#define PIG_HPP
#include <string>
#include "animal.hpp"
class Pig:public Animal{
    public:
    std::string voice() const override;
};
#endif // PIG_HPP