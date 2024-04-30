#ifndef FIGURE_HPP
#define FIGURE_HPP
#include <string>
class Figure{
    public:
    Figure (const int & X,const int& Y,const std::string& Color);
    virtual std::string getFigure() const;
    virtual int getX() const ;
    virtual int getY() const ;
    virtual ~Figure(){}
 private:
 int x;
 int y;
std::string color;

};
#endif // FIGURE_HPP