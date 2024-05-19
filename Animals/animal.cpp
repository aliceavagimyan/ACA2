#include "animal.hpp"

Animal::Animal() : m_age(0), ptr(nullptr) {}

Animal::Animal(const int& age) : m_age(age),ptr(new int(age)) {}

Animal::~Animal() {
    delete ptr;
}

int Animal::age() const {
    return m_age;
}

Animal::Animal(Animal&& other) : m_age(0) ,ptr(nullptr){
      
    m_age = other.m_age;
    ptr=other.ptr;
    other.m_age = 0;
    other.ptr=nullptr;
    std::cout <<"animal move"<< std::endl;
}

Animal& Animal::operator=(Animal&& other) {
    if (this != &other) {
        delete ptr;
       m_age = other.m_age;
    ptr=other.ptr;
    other.m_age = 0;
    other.ptr=nullptr;
    }
    return *this;
}
bool Animal::operator<(const Animal& other) const {
    return m_age < other.m_age;
}

bool Animal::operator>(const Animal& other) const {
    return m_age > other.m_age;
}

bool Animal::operator==(const Animal& other) const {
    return m_age == other.m_age;
}