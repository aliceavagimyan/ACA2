#include <iostream>

template <typename T>
class SmartPointer{
    public:
   explicit SmartPointer(T* p=nullptr):ptr(p){}
    ~SmartPointer(){
        delete ptr;
    }
    T& operator*()  const{
        return *ptr;
    }
    T* operator->() const {
        return ptr;
    }
    private:
    T* ptr;

};

class Test{
    public:
    void test(){
        std::cout<<"test"<<std::endl;
    }
};
int main(){
    SmartPointer<Test> ptr(new Test());
    ptr->test();
    (*ptr).test();
    return 0;
}
