#include <iostream>
#include "animal.hpp"
int main(){
    Animal an1("lion",3);
    Animal an2("horse",1);
    Animal an3("cat",2);
    std::cout<<Animal::getCount()<<std::endl;
    return 0;
}