#include "dog.hpp"
#include "cat.hpp"

int main(){
    Dog dog(3);
    Cat cat(2);
    Cat cat1(std::move(dog));
    std::cout<<cat1.voice()<<std::endl;
    Dog dog2(std::move(cat1));
    std::cout<<dog2.voice()<<std::endl;
    Dog dog3(5);
    Cat cat2(7);
    cat2=std::move(dog3);
    std::cout<<cat2.voice()<<std::endl;
    return 0;
}