#ifndef KING_HPP
#define KING_HPP

#include <string>
#include "Figure.hpp"

class King : public Figure {
public:
    King(const int& X, const int& Y, const std::string& Color) : Figure(X, Y, Color), x(X), y(Y), color(Color){}
    std::string getFigure() const override;
    int getX() const override;
    int getY() const override;
   

private:
    int x;
    int y;
    std::string color;
};

#endif // KING_HPP