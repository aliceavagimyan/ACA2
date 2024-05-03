#ifndef REMOTECONTROL_HPP
#define REMOTECONTROL_HPP
class RemoteController{
    public:
    virtual void getModel() const =0;
    virtual void on()const =0;
    virtual void off()const =0;
    virtual void mute()const =0;
    virtual void Return()const=0;
    virtual void channelUp() const=0;
     virtual void channelDown() const=0;
    virtual ~RemoteController(){}

};
#endif //REMOTECONTROL_HPP