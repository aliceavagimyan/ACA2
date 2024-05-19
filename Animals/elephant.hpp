#ifndef ELEPHANT_HPP
#define ELEPHANT_HPP
#include "animal.hpp"


class Elephant:public Animal{
    public:
    std::string voice() const override;
    int age() const override;
    Elephant(Animal&& other);
    Elephant( const int& age) ;
    Elephant& operator=(Animal&& other);
   private:
   std::string m_voice="trumpet";
};
#endif // ELEPHANT_HPP