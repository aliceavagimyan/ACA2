
#include "rook.hpp"  
#define OUT_OF_FIELD 2


std::string Rook::getFigure()const {
    return "Rook";
}
int Rook::getX()  const  {
    return x;
}
int Rook::getY() const {
    return y;
}
