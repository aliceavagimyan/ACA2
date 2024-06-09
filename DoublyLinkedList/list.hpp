#ifndef DOUBLY_LIST
#define DOUBLY_LIST

#include <iostream>

template <typename T>
class DoublyList {
public:
    DoublyList();
    ~DoublyList();
    void push_front(T data);
    void pop_front();
    void print();
private:
    template <typename U>
    class Node {
    public:
        U data;
        Node<U>* pNext;
        Node<U>* pPrev;
        Node(U newData) : data(newData), pNext(nullptr), pPrev(nullptr) {}
    };

    Node<T>* head;
    Node<T>* tail;
};

template <typename T>
DoublyList<T>::DoublyList() : head(nullptr), tail(nullptr) {}

template <typename T>
DoublyList<T>::~DoublyList() {
    while (head != nullptr) {
        pop_front();
    }
}

template <typename T>
void DoublyList<T>::push_front(T data) {
    Node<T>* newNode = new Node<T>(data);
    if (head == nullptr) {
        head = tail = newNode;
    } else {
        newNode->pNext = head;
        head->pPrev = newNode;
        head = newNode;
    }
}

template <typename T>
void DoublyList<T>::pop_front() {
    if (head == nullptr) {
        return;
    }
    Node<T>* temp = head;
    head = head->pNext;
    if (head != nullptr) {
        head->pPrev = nullptr;
    } else {
        tail = nullptr;
    }
    delete temp;
}

template <typename T>
void DoublyList<T>::print() {
    Node<T>* current = head;
    while (current != nullptr) {
        std::cout << current->data << std::endl;
        current = current->pNext;
    }
    std::cout << std::endl;
}
#endif // DOUBLY_LIST
