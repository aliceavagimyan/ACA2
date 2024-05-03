#include <iostream>
#include "myRemote.hpp"
void MyRemote::getModel() const {
    std::cout<<"model of the remote controller: "<<m_model<<std::endl;
}
void MyRemote::on() const {
    std::cout<<"Tv is turned on" <<std::endl;
}
void MyRemote::off() const {
    std::cout<<"Tv is turned off" <<std::endl;
}
void MyRemote::mute() const {
    std::cout<<"Tv is muted" <<std::endl;
}
void MyRemote::Return() const {
    std::cout<<"Returned " <<std::endl;
}
void MyRemote::channelUp() const {
    std::cout<<"channel up" <<std::endl;
}
void MyRemote::channelDown() const {
    std::cout<<"channel down" <<std::endl;
}