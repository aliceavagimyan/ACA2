#include "figure.hpp"
#define OUT_OF_MOVE  1
#define OUT_OF_FIELD 2
Figure::Figure (const int & X,const int& Y,const std::string& Color): x(X),y(Y),color(Color){}
int Figure::getX()  const  {
    return x;
}
int Figure::getY() const {
    return y;
}
std::string Figure::getFigure() const {
    return "Generic Figure";
}

