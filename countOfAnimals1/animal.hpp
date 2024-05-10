#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
class Animal{
    static int count;
    public:
     Animal (const std::string& name,const int& age):m_name(name),m_age(age){
        ++count;
    }
    Animal(){
        ++count;
    }
     ~Animal(){
        --count;
     }
     Animal (const Animal& other):m_name(other.m_name),m_age(other.m_age){
        ++count;
     }
   
  static int getCount ();
     private:
     std::string m_name;
     int m_age;
    
};

#endif //ANIMAL_HPP