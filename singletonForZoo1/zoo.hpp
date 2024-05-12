#include "animal.hpp"
#include <iostream>
class Zoo{
    public:
    static Zoo* getInstance() ;
    bool animalsInZoo(Animal*);
    void printZoo()const;
     ~Zoo();
      Zoo(const Zoo&) = delete; 
    Zoo& operator=(const Zoo&) = delete;
private:
Zoo();
 Zoo(int size);
Animal** m_animals=nullptr;
int m_size=10;
int m_animalNumber=0;
static Zoo* instance;
};