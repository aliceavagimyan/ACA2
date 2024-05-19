#include "tiger.hpp"

Tiger::Tiger(const int& age) : Animal(age) {}

std::string Tiger::voice() const {
    return "no sound";
}

int Tiger::age() const {
    return Animal::age();
}
Tiger::Tiger(Animal&& other):Animal(std::move(other.age())){
     
      m_voice=other.voice();
}
Tiger& Tiger::operator=(Animal&& other) {
    if (this != &other) {
        Animal::operator=(std::move(other));
        m_voice = other.voice(); 
        
    }
    return *this;
}