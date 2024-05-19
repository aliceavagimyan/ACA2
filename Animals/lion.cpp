#include "lion.hpp"

Lion::Lion(const int& age) : Animal(age) {}

std::string Lion::voice() const {
    return "no sound";
}

int Lion::age() const {
    return Animal::age();
}
Lion::Lion(Animal&& other):Animal(std::move(other.age())){
     
      m_voice=other.voice();
}
Lion& Lion::operator=(Animal&& other) {
    if (this != &other) {
        Animal::operator=(std::move(other));
        m_voice = other.voice(); 
        
    }
    return *this;
}