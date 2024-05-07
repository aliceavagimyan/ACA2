#ifndef AMPHIBANS_HPP
#define AMPHIBANS_HPP
#include "landAnimal.hpp"
#include "aquaticAnimal.hpp"
class Amphibians:  public virtual LandAnimal, public virtual AquaticAnimal{
     public:
      Amphibians(std::string& name,const int& age,const std::string& species,const std::string& limbType,
      const std::string& breathingType,const std::string& swimLimbType,const std::string& swimBreathingType): 
      LandAnimal(name,age,species,limbType,breathingType),AquaticAnimal(name,age,species,swimLimbType,swimBreathingType){}
};
#endif //AMPHIBANS_HPP