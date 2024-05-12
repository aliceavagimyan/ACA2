#include "pig.hpp"
Pig* Pig::instance = nullptr;
std::string Pig::getName() const {
    return "pig";
   }
    std::string Pig::voice() const {
        return "oink";
    }
   
    Pig* Pig::getInstance() {
    if (!instance) {
        instance = new Pig("Pig");
    }
    return instance;
}
