#include "bird.hpp"
#include <iostream>

Bird::Bird(const int& age) : Animal(age) {}

Bird::Bird(Animal&& other)  :Animal(std::move(other.age())) {
    std::cout<< "cat move"<<std::endl;
    m_voice = other.voice();
}

std::string Bird::voice() const {
              return "meow";
}

int Bird::age() const {
    return Animal::age();
}
Bird& Bird::operator=(Animal&& other) {
    if (this != &other) {
        Animal::operator=(std::move(other));
        m_voice = other.voice(); 
         std::cout<<"cat move ="<<std::endl;
    }
    return *this;
}