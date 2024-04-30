#include "Players.hpp"

Players::Players(const std::string& pName, const std::string& pColor)
    : m_playerName(pName), m_Color(pColor) {
        if(m_Color!="white" || m_Color!="black"){
            isValid=false;
            return;
        }
    }
            std::string Players::getName() const{
                std::cout<<"Player name:"<<m_playerName<<std::endl;
            return m_playerName;
        }
        std::string Players::getColor() const {
             std::cout<<"Player color:"<<m_Color<<std::endl;
            return m_Color;
        }