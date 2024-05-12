#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>
class Animal{
    private:
     std::string m_name;
    public:
   Animal(const std::string& name):m_name(name){}
     std::string getName()const ;
    virtual std::string  voice() const=0; 
     virtual ~Animal() {}
};
#endif // ANIMAL_HPP 