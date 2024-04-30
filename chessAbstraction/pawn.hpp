#ifndef PAWN_HPP
#define PAWN_HPP

#include <string>
#include "Figure.hpp"

class Pawn : public Figure {
public:
    Pawn(const int& X, const int& Y, const std::string& Color) : Figure(X, Y, Color), x(X), y(Y), color(Color){}
    std::string getFigure() const override;
    int getX() const override;
    int getY() const override;
   

private:
    int x;
    int y;
    std::string color;
};

#endif // PAWN_HPP  