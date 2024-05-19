#ifndef DOG_HPP
#define DOG_HPP
#include "animal.hpp"


class Dog:public Animal{
    public:
    std::string voice() const override;
    int age() const override;
   Dog(Animal&& other);
    Dog( const int& age) ;
    Dog& operator=(Animal&& other);
   private:
   std::string m_voice="haf";
};
#endif // DOG_HPP