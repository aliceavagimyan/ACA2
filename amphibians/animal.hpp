#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>
class Animal{ 
 public:
 Animal(const std::string& name,const int& age,const std::string& species):m_name(name),m_age(age),m_species(species){}
 std::string getName() const;
int getAge() const ;
  std::string getSpecies() const;
  private:
  std::string m_name;
  int m_age;
  std::string m_species;

};

#endif //ANIMAL_HPP