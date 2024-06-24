#include <iostream>

template <typename T>
class Vector {
public:
    Vector();
    ~Vector();
    void push_back(const T& element);
    void print() const;
    void resize();
    void resize(int newSize);
    void reserve(int newCapacity);

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
        newArray[i] = std::move(array[i]);
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
void Vector<T>::resize(int newSize) {
    if (newSize < 0) {
        std::cerr << "New size cannot be negative." << std::endl;
        return;
    }

    if (newSize < size) {
        for (int i = newSize; i < size; ++i) {
            array[i].~T();
        }
    } else if (newSize > size) {
       
        T* newArray = new T[newSize];

        
        for (int i = 0; i < size; ++i) {
            newArray[i] = std::move(array[i]);
        }

       
        for (int i = size; i < newSize; ++i) {
            newArray[i] = T();
        }

       
        delete[] array;
        array = newArray;
        capacity = newSize; 
    }
    size = newSize; 
}

template <typename T>
void Vector<T>::reserve(int newCapacity) {
    if (newCapacity > capacity) {
        T* newArray = new T[newCapacity];
        for (int i = 0; i < size; ++i) {
            newArray[i] = std::move(array[i]);
        }
        delete[] array;
        array = newArray;
        capacity = newCapacity;
    }
}

int main() {
  
    Vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    
    std::cout << "Original vector:" << std::endl;
    vec.print();
    vec.resize(5);
    std::cout << "Vector after resizing to larger size:" << std::endl;
    vec.print();

 
    vec.resize(2);
    std::cout << "Vector after resizing to smaller size:" << std::endl;
    vec.print();

    vec.reserve(10);

    std::cout << "Vector after reserving capacity:" << std::endl;
    vec.print();

    return 0;
}