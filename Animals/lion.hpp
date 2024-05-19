#ifndef LION_HPP
#define  LION_HPP
#include "animal.hpp"


class Lion:public Animal{
    public:
    std::string voice() const override;
    int age() const override;
    Lion(Animal&& other);
   Lion( const int& age) ;
    Lion& operator=(Animal&& other);
   private:
   std::string m_voice="roar";
};
#endif // LION_HPP