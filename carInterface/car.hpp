#ifndef CAR_HPP
#define CAR_HPP
#include <string>
class Car{
    public:
    virtual ~Car() {}
    virtual std::string getModel() const=0;
    virtual int getYear() const=0;
    virtual void turnLeft() const=0;
    virtual void turnRight() const=0;
    virtual void honk() const=0;
    virtual void refuel() const =0;
};
#endif //CAR_HPP