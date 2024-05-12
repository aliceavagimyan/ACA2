#include "zoo.hpp"
#include "pig.hpp"
#include "horse.hpp"



 int main() {
    Zoo* zoo = Zoo::getInstance();
    zoo->animalsInZoo(new Pig("Pig"));
    zoo->animalsInZoo(new Horse("Horse"));
    zoo->printZoo();
    delete zoo;
    return 0;
}
