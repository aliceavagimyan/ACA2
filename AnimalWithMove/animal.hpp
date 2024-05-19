#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
public:
    virtual std::string voice() const = 0;
    virtual int age() const;

    Animal();
    Animal(const int& age);
    virtual ~Animal();

    Animal(Animal&& other) ;
    Animal& operator=(Animal&& other) ;

private:
    int m_age;
     int* ptr;
};

#endif // ANIMAL_HPP