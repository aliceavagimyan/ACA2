#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>

template <typename T>
class Vector {
public:
    Vector();
    ~Vector();
    void push_back(const T& element);
    void print() const;
    void pop_back();
    void resize();
    T& back();
    bool empty() const ;

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
Vector<T>::~Vector() {
    delete[] array;
}

template <typename T>
void Vector<T>::push_back(const T& element) {
    if (size >= capacity) {
        resize();
    }
    array[size++] = element;
}
template <typename T>
void Vector<T>::pop_back() {
    if (size > 0) {
        --size;
    } else {
        std::cout << "Cannot pop from an empty vector." << std::endl;
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
void Vector<T>::print() const {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
template <typename T>
T& Vector<T>::back() {
    if (size == 0) {
       std::cout<<"Vector is empty"<<std::endl;
    }
    return array[size - 1];
}
template <typename T>
bool Vector<T>::empty() const {
    return size == 0;
}
#endif // VECTOR_HPP