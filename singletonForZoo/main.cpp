#include "zoo.hpp"
#include "pig.hpp"
#include "horse.hpp"

int main(){
   Animal* pig=Pig::getInstance();
   Animal*  horse =Horse::getInstance();

    Zoo myzoo(5);
   myzoo.animalsInZoo(pig);
   myzoo.animalsInZoo(horse);
   myzoo.printZoo();
 return 0;
}