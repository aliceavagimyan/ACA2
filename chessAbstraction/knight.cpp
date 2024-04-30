
#include "knight.hpp"
#define OUT_OF_FIELD 2

//King::King(const int& X, const int& Y, const std::string& Color) : Figure(X, Y, Color), x(X), y(Y), color(Color) {}
std::string Knight::getFigure()const {
    return "Knight";
}
int Knight::getX()  const  {
    return x;
}
int Knight::getY() const {
    return y;
}
