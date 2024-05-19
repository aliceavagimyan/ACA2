#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "elephant.hpp"
#include  "lion.hpp"
#include "tiger.hpp"
#include "fish.hpp"
#include "bird.hpp"
#include <iostream>

void  Sort(Animal* animals[], int size) {
    for (int i = 1; i < size; ++i) {
        int j = i;
       while (j > 0 && animals[j]->age() > animals[j - 1]->age()) { 
            std::swap(animals[j], animals[j - 1]);
            --j;
        }
    }
}

int main(){
    Cat cat(5);
    Dog dog(6);
    Elephant elephant(1);
    Bird bird(3);
    Lion lion(5);
    Tiger tiger(7);
    Fish fish(4);

    Animal* animals[]={&cat,&dog,&elephant,&bird,&lion,&tiger,&fish};
    int size = sizeof(animals) / sizeof(animals[0]);

   
    Sort(animals, size);

    
    std::cout << "3 oldest " << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << animals[i]->voice() << " age: " << animals[i]->age() << std::endl;
    }
    return 0;
}