#include "zoo.hpp"
Zoo* Zoo::instance=nullptr;
Zoo::~Zoo() {
    for (int i = 0; i < m_animalNumber; ++i) {
        delete m_animals[i];
    }
    delete[] m_animals;
}


Zoo::Zoo(){
        m_animals=new Animal*[m_size];
    }

bool Zoo::animalsInZoo(Animal* c){
        if(m_animalNumber<m_size){
            m_animals[m_animalNumber++]=c;
          return true;
        }
        return false;
    }
void Zoo::printZoo() const {
    for (int i = 0; i < m_animalNumber; ++i) {
        if (m_animals[i] != nullptr) {
            std::cout << "Animal " << i + 1 << ": " << m_animals[i]->getName() <<" "<<m_animals[i]->voice() << std::endl;
        } 
    }
}
Zoo* Zoo::getInstance() {
    if (!instance) {
        instance = new Zoo();
    }
    return instance;
}
