#ifndef FISH_HPP
#define FISH_HPP
#include "animal.hpp"


class Fish:public Animal{
    public:
    std::string voice() const override;
    int age() const override;
    Fish(Animal&& other);
    Fish( const int& age) ;
    Fish& operator=(Animal&& other);
   private:
   std::string m_voice="no sound";
};
#endif // FISH_HPP