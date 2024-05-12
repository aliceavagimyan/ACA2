#include "zoo.hpp"
bool Zoo::animalsInZoo(Animal* c){
        bool bRes=false;
        if(m_animalNumber!=m_size){
            m_animals[m_animalNumber]=c;
            m_animalNumber++;
            bRes=true;
        }
        return bRes;
    }
void Zoo::removeAnimals(const std::string& name ){
        bool found =false;
        for (int i=0;i<m_animalNumber;++i){
            if(m_animals[i]->getName()==name){
                delete m_animals[i];
                 for (int j = i; j < m_animalNumber- 1; ++j) {
                    m_animals[j] = m_animals[j + 1];
                }
                m_animals[--m_animalNumber]=nullptr;
                found =true;
                break;

            }
            
        }
         if (!found) {
        std::cout << "Animal" << name << " not found." << std::endl;
    }
 }
void Zoo::printZoo()const  {     
     for (int i = 0; i < m_animalNumber; ++i) {
         if (m_animals[i] != nullptr) {
            std::cout << "Animal "<<i+1 <<":"<< m_animals[i]->getName() <<" " <<m_animals[i]->voice()<<std::endl;
                      }
    }
}