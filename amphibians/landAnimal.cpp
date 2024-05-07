#include "landAnimal.hpp"
std::string LandAnimal::getLimbType()const {
    return m_limbType;
}
std::string LandAnimal::getBreathingType()const {
    return m_breathingType;
}
void LandAnimal::walk() const{
    std::cout<<"Land animal can walk"<<std::endl;
}
