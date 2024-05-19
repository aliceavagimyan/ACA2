#ifndef BIRD_HPP
#define BIRD_HPP


#include "animal.hpp"
class Bird : public Animal {
public:
    std::string voice() const override;
    int age() const override;

    Bird(const int& age);
    Bird(Animal&& other);
    Bird& operator=(Animal&& other);

private:
    std::string m_voice = "songs";
};

#endif // BIRD_HPP