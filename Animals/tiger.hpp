#ifndef TIGER_HPP
#define  TIGER_HPP
#include "animal.hpp"


class Tiger:public Animal{
    public:
    std::string voice() const override;
    int age() const override;
    Tiger(Animal&& other);
    Tiger( const int& age) ;
     Tiger& operator=(Animal&& other);
   private:
   std::string m_voice="growl";
};
#endif // TIGER_HPP