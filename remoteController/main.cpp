
#include "myRemote.hpp"
int main(){
    MyRemote remote("samsung");
    remote.getModel();
    remote.on();
    remote.off();
    remote.mute();
    remote.Return();
    remote.channelUp();
    remote.channelDown();
    return 0;
}