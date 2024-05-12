#ifndef HORSE_HPP
#define HORSE_HPP
#include <string>
#include "animal.hpp"
class Horse : public Animal {
public:
    Horse(const Horse&) = delete;
    void operator=(Horse const& other) = delete;
    std::string getName() const override;
    std::string voice() const override ;
    static Horse* getInstance() ;

private:
    Horse();
    Horse(const std::string& name) : Animal(name) {}
     static Horse* instance;
};

#endif // HORSE_HPP