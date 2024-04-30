#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
class Animal{
    public:
   virtual std::string  voice() const=0;
   virtual int  age() const=0;
   virtual int weight() const=0;
   Animal(const int& age,const int& weight):m_age(age),m_weight(weight){}
    virtual ~Animal() {}
    private:
    int  m_age;
    int  m_weight;
};
#endif // ANIMAL_HPP 