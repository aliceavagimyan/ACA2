#ifndef CAT_HPP
#define CAT_HPP


#include "animal.hpp"
class Cat : public Animal {
public:
    std::string voice() const override;
    int age() const override;

    Cat(const int& age);
    Cat(Animal&& other);
    Cat& operator=(Animal&& other);

private:
    std::string m_voice = "Meow";
};

#endif // CAT_HPP