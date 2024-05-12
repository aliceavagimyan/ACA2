#ifndef PIG_HPP
#define PIG_HPP
#include <string>
#include "animal.hpp"
class Pig : public Animal {
public:
     static Pig* getInstance();
    Pig(Pig const&) = delete;
    void operator=(Pig const& other) = delete;
    std::string getName() const override;
    std::string voice() const override ;

private:
      Pig();
    std::string m_name;
     static Pig* instance;
    Pig(const std::string& name) : Animal(name) {}
};

#endif // PIG_HPP