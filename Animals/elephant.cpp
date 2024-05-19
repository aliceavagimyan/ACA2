#include "elephant.hpp"

Elephant::Elephant(const int& age) : Animal(age) {}

std::string Elephant::voice() const {
    return "Trumpet";
}

int Elephant::age() const {
    return Animal::age();
}
Elephant::Elephant(Animal&& other):Animal(std::move(other.age())){
    
      m_voice=other.voice();
}
Elephant& Elephant::operator=(Animal&& other) {
    if (this != &other) {
        Animal::operator=(std::move(other));
        m_voice = other.voice(); 
            }
    return *this;
}