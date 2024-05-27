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

#endif // VECTOR_HPP