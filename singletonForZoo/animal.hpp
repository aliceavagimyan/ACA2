#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
class Animal{
     std::string m_name;
    public:
   Animal(const std::string& name):m_name(name){}
    virtual std::string getName()const =0;
    virtual std::string  voice() const=0; 
    virtual ~Animal() {}
};
#endif // ANIMAL_HPP 