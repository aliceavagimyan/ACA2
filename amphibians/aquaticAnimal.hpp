#ifndef AQUATICANIMAL_HPP
#define AQUATICANIMAL_HPP
#include "animal.hpp"
class AquaticAnimal:public virtual Animal{ 
 public:
 AquaticAnimal( std::string& name,const int& age,const std::string& species,const std::string& swimLimbType,const std::string& swimBreathingType):
  Animal(name,age,species),m_swimLimbType(swimLimbType), m_swimBreathingType(swimBreathingType){}
  std::string getSwimLimbType() const;
  std::string getSwimBreathingType() const;
  void swim() const;
  private:
  std::string m_swimLimbType;
  std::string m_swimBreathingType;
};
#endif //AQUATICANIMAL_HPP