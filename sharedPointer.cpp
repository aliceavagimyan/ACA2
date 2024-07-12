#include <iostream>

template <typename T>
 class sharedPtr{
    public:
    sharedPtr():m_ptr(nullptr),count(new int(1)){}
    explicit sharedPtr(T* ptr):m_ptr(ptr),count(new int(1)){}
    sharedPtr(const sharedPtr& other):m_ptr(other.m_ptr),count(other.count){
        ++(*count);
    }
    ~sharedPtr(){
        release();
    }
    T& operator*() const{
        return *m_ptr;
    }
    T* operator->() const {
        return m_ptr;
    }
    int getCount() const {
        return *count;
    }

    private:
    T* m_ptr;
    int* count;
    void release(){
        if(count && --(*count)==0){
            delete m_ptr;
            delete count;
            m_ptr=nullptr;
            count=nullptr;
        }
    }
 };

 int main(){
    sharedPtr<int> sp1(new int(20));
    std::cout << "sp1 value: " << *sp1 << ", count: " << sp1.getCount()<< std::endl;


    sharedPtr<int> sp2 = sp1;
    std::cout << "sp2 value: " << *sp2 << ", count: " << sp2.getCount() << std::endl;

    
    sharedPtr<int> sp3 = sp2;
    std::cout << "sp3 value: " << *sp3 << ", count: " <<sp3.getCount() << std::endl;

    std::cout << "sp1 value after sp3 scope: " << *sp1 << ", count: " << sp1.getCount() << std::endl;
    std::cout << "sp2 value after sp3 scope: " << *sp2 << ", count: " << sp2.getCount() << std::endl;

   
    sharedPtr<int> sp4(new int(40));
    std::cout << "sp4 value: " << *sp4 << ", count: " << sp4.getCount() << std::endl;

    
    sp4 = sp1;
    std::cout << "sp4 value after assignment: " << *sp4 << ", count: " << sp4.getCount() << std::endl;

    return 0; 
 }
