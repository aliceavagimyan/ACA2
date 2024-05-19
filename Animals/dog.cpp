#include "dog.hpp"

Dog::Dog(const int& age) : Animal(age) {}

std::string Dog::voice() const {
    return "Haf-Haf";
}

int Dog::age() const {
    return Animal::age();
}
Dog::Dog(Animal&& other):Animal(std::move(other.age())){
      std::cout<< "dog move"<<std::endl;
      m_voice=other.voice();
}
Dog& Dog::operator=(Animal&& other) {
    if (this != &other) {
        Animal::operator=(std::move(other));
        m_voice = other.voice(); 
        std::cout<<"dog move ="<<std::endl;
    }
    return *this;
}