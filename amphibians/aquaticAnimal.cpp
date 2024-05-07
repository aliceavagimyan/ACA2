#include "aquaticAnimal.hpp"
std::string AquaticAnimal::getSwimLimbType()const {
    return m_swimLimbType; 
}
std::string AquaticAnimal::getSwimBreathingType()const {
    return m_swimBreathingType;
}
void AquaticAnimal::swim()const{
    std::cout<<"aquatic animal swims"<<std::endl;
}