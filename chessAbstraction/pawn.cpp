
#include "pawn.hpp"
#define OUT_OF_FIELD 2

//King::King(const int& X, const int& Y, const std::string& Color) : Figure(X, Y, Color), x(X), y(Y), color(Color) {}
std::string Pawn::getFigure()const {
    return "Pawn";
}
int Pawn::getX()  const  {
    return x;
}
int Pawn::getY() const {
    return y;
}
