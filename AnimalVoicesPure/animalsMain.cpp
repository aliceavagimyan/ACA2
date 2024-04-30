#include "animal.hpp"
#include "cat.hpp"
#include "cow.hpp"
#include "dog.hpp"
#include "sheep.hpp"
#include "pig.hpp"
#include <iostream>

 int main(){
    Cat cat(3,50);
    Cow cow(2,450);
    Dog dog(6,38);
    Sheep sheep(7,37);
    Pig pig(4,300);
    const Animal* animals[5];
    animals[0]=&cat;
    animals[1]=&cow;
    animals[2]=&dog;
    animals[3]=&sheep;
    animals[4]=&pig;    
 
    for (int i=0;i<5;++i){
        std::cout<<animals[i]->voice()<<std::endl;
        std::cout<<animals[i]->age()<<std::endl;
        std::cout<<animals[i]->weight()<<std::endl;
    }
     for (int i = 0; i < 5; ++i) {
        delete animals[i];
    }
     return 0;
 }