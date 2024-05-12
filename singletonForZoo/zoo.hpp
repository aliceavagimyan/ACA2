#include "animal.hpp"
#include <iostream>
class Zoo{
    public:
    Zoo(int size): m_size(size){
        m_animals=new Animal*[size];
    }
    ~Zoo(){
        for(int i=0;i<m_animalNumber;++i){
            delete m_animals[i];
        }
        delete [] m_animals;
    }
    bool animalsInZoo(Animal*);
    void removeAnimals(const std::string&  );
    void printZoo()const;
private:
Animal** m_animals=nullptr;
int m_size=0;
int m_animalNumber=0;
};