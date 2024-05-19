#include "cat.hpp"
#include <iostream>

Cat::Cat(const int& age) : Animal(age) {}

Cat::Cat(Animal&& other)  :Animal(std::move(other.age())) {
    std::cout<< "cat move"<<std::endl;
    m_voice = other.voice();
}

std::string Cat::voice() const {
              return "meow";
}

int Cat::age() const {
    return Animal::age();
}
Cat& Cat::operator=(Animal&& other) {
    if (this != &other) {
        Animal::operator=(std::move(other));
        m_voice = other.voice(); 
         std::cout<<"cat move ="<<std::endl;
    }
    return *this;
}