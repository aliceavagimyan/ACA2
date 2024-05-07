#include "amphibians.hpp"
#include "animal.hpp"
int main(){
    std::string name = "Froggy";
    int age = 2;
    std::string species = "Rana temporaria";
    std::string limbType = "Legs";
    std::string breathingType = "Cutaneous respiration";
    std::string swimLimbType = "Webbed feet";
    std::string swimBreathingType = "Gills and lungs";
    Amphibians frog(name, age, species, limbType, breathingType, swimLimbType, swimBreathingType);

std::cout << frog.LandAnimal::getName() << std::endl;
std::cout << frog.LandAnimal::getAge() << std::endl;
std::cout << frog.LandAnimal::getSpecies() << std::endl;
std::cout << frog.LandAnimal::getLimbType() << std::endl;
std::cout << frog.LandAnimal::getBreathingType() << std::endl;
std::cout << frog.AquaticAnimal::getSwimLimbType() << std::endl;
std::cout << frog.AquaticAnimal::getSwimBreathingType() << std::endl;

return 0;
}