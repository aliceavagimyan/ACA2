#ifndef QUEEN_HPP
#define QUEEN_HPP

#include <string>
#include "Figure.hpp"

class Queen: public Figure {
public:
    Queen(const int& X, const int& Y, const std::string& Color) : Figure(X, Y, Color), x(X), y(Y), color(Color){}
    std::string getFigure() const override;
    int getX() const override;
    int getY() const override;
   

private:
    int x;
    int y;
    std::string color;
};

#endif // QUEEN_HPP  