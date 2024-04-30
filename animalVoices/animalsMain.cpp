#include "animal.hpp"
#include "cat.hpp"
#include "cow.hpp"
#include "dog.hpp"
#include "sheep.hpp"
#include "pig.hpp"
#include <iostream>

 int main(){
    Cat cat;
    Cow cow;
    Dog dog;
    Sheep sheep;
    Pig pig;
    const Animal* animals[5];
    animals[0]=&cat;
    animals[1]=&cow;
    animals[2]=&dog;
    animals[3]=&sheep;
    animals[4]=&pig;    
 
    for (int i=0;i<5;++i){
        std::cout<<animals[i]->voice()<<std::endl;
    }
     for (int i = 0; i < 5; ++i) {
        delete animals[i];
    }
     return 0;
 }