#ifndef MYREMOTE_HPP
#define  MYREMOTE_HPP
#include "remoteController.hpp"
#include <string>
class MyRemote:public RemoteController{
    public:
  MyRemote (const std::string& model): m_model(model){}
  void getModel()const override;
  void on()const override;
  void off()const override;
    void mute()const override;
     void Return()const override;
     void channelUp()const override;
    virtual void channelDown() const override;
   
     private:
     std::string m_model;

};

#endif //MYREMOTE_HPP