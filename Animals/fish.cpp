#include "fish.hpp"

Fish::Fish(const int& age) : Animal(age) {}

std::string Fish::voice() const {
    return "no sound";
}

int Fish::age() const {
    return Animal::age();
}
Fish::Fish(Animal&& other):Animal(std::move(other.age())){
     
      m_voice=other.voice();
}
Fish& Fish::operator=(Animal&& other) {
    if (this != &other) {
        Animal::operator=(std::move(other));
        m_voice = other.voice(); 
        
    }
    return *this;
}