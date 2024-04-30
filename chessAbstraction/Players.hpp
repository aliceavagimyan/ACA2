#ifndef PLAYERS_HPP
#define PLAYERS_HPP
#include <iostream>
#include <string>
class Players{
    public:
        Players(const std::string& pName,const std::string& pColor);
        std::string getName() const;
        std::string getColor() const ;
       private:
       std::string m_playerName;
       std::string m_Color;
       bool isValid=true;

};
 #endif //PLAYERS_HPP