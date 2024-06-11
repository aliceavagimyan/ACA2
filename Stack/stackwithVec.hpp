#ifndef STACK
#define STACK

#include "vector.hpp"
template <typename T>
class Stack{
    private:
    Vector<int> v;
    public: 
   Stack() {} 
   ~Stack() {}
  
    void push(int data) 
    { 
        v.push_back(data); 
        std::cout << "Pushed: " << data <<std:: endl; 
    } 
    int pop() 
    { 
        if (isEmpty()) { 
            std::cout << "Stack is empty."; 
            return -1; 
        } 
        int top = v.back(); 
        v.pop_back(); 
        std::cout << "Popped: " << top << std::endl; 
        return top; 
    } 
  
    int top() 
    { 
        if (isEmpty()) { 
            std::cout << "Stack is empty."; 
            return -1; 
        } 
        return v.back(); 
    } 
  
   
    bool isEmpty() { return v.empty(); } 
}; 

#endif //STACK