#include <iostream>
#include <string>
class MyClass{
     public:
     MyClass(const std::string& name):m_name(name){}
     void operator()(){
        std::cout<<"Hello, "<<m_name<<std::endl;
     }
     private:
    std::string m_name;
};
int main(){
    MyClass a("Alice");
    a();
    return 0;

}