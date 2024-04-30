
#include "King.hpp"
#define OUT_OF_FIELD 2

//King::King(const int& X, const int& Y, const std::string& Color) : Figure(X, Y, Color), x(X), y(Y), color(Color) {}
std::string King::getFigure()const {
    return "King";
}
int King::getX()  const  {
    return x;
}
int King::getY() const {
    return y;
}
