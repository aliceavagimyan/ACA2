#ifndef VECTOR_HPP
#define VECTOR_HPP
#include <initializer_list>
#include <iostream>

template <typename T>
class Vector {
public:
    Vector();
    Vector(std::initializer_list<T> list);
    ~Vector();
    void push_back(const T& element);
    void push_front(const T&element);
    void pop_back();
    void pop_front();
    void insert(const T& element ,const int& index);
    void print() const;
      void resize();

private:
    T* array;
    int size;
    int capacity;
  
};

template <typename T>
Vector<T>::Vector() : size(0), capacity(2) {
    array = new T[capacity];
}
template <typename T>
Vector<T>::Vector(std::initializer_list<T> list) : size(list.size()), capacity(list.size() * 2) {
    array = new T[capacity];
    typename std::initializer_list<T>::iterator iter = list.begin();
    for (int i = 0; i < size; ++i) {
        array[i] = *iter;
        ++iter;
    }
}

template <typename T>
Vector<T>::~Vector(){
    delete[] array;
    array=nullptr;
}

template <typename T>
void Vector<T>::push_back(const T& element) {
    if (size >= capacity) {
        resize();
    }
    array[size++] = element;
}
template <typename T>
void Vector<T>::push_front(const T& element){
    if(size>capacity){
        resize();
    }
   for (int i = size; i > 0; --i) {
        array[i] = array[i - 1];
    }
    array[0] = element;
    ++size;
}

template <typename T>
void Vector<T>::pop_back() {
    if (size > 0) {
        --size;
    }
}
template <typename T>
void Vector<T>::pop_front() {
    if (size > 0) {
        for (int i = 0; i < size - 1; ++i) {
            array[i] = array[i + 1];
        }
        --size;
    }
}


template <typename T>
void Vector<T>::resize() {
    capacity *= 2;
    T* newArray = new T[capacity];
    for (int i = 0; i < size; ++i) {
        newArray[i] = array[i];
    }
    delete[] array;
    array = newArray;
}
template <typename T>
void Vector<T>::insert(const T& element,const int& index){
    if(index<0 || index >size){
        std::cout<<"wrong index "<<std::endl;
    }
    if(size>capacity){
        resize();
    }
    for (int i=size;i>index;--i){
        array[i]=array[i-1];
    }
    array[index]=element;
    ++size;
}




template <typename T>
void Vector<T>::print() const {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

#endif // VECTOR_HPP