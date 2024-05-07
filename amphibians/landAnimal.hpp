#ifndef LANDANIMAL_HPP
#define LANDANIMAL_HPP
#include "animal.hpp"
class LandAnimal:public Animal{ 
 public:
  LandAnimal( std::string& name,const int& age,const std::string& species,const std::string& limbType,const std::string& breathingType):
  Animal(name,age,species),m_limbType(limbType), m_breathingType(breathingType){}
  std::string getLimbType() const;
  std::string getBreathingType() const;
 void walk() const;
  private:
  std::string m_limbType;
  std::string m_breathingType;
 
};

#endif //LANDANIMAL_HPP