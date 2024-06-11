#ifndef STACK
#define STACK

#include "list.hpp"
template <typename T> 
  
class Stack { 
public: 
    List<T> list; 
    int currentSize = 0; 
    void push(const T& data) 
    { 
       currentSize++; 
         
        list.push_front(data); 
    } 
  
    
    void pop() 
    { 
        if (currentSize <= 0) { 
            std::cout << "Stack empty" << std::endl; 
        } 
        else { 
            currentSize--; 
            list.pop_front(); 
        } 
    } 

    bool empty() { 
        return currentSize == 0; } 
  
    T top() {
         return list.top(); } 
    int size() 
    { 
        return currentSize; 
    } 
  
   void print() {
     list.print();
    }

}; 

#endif //STACK