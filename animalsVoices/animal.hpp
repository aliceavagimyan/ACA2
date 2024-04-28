#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
class Animal{
    public:
   virtual std::string  voice() const;
    virtual ~Animal() {}
};
#endif // ANIMAL_HPP 