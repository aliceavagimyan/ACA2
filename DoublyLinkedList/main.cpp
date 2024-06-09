#include "list.hpp"
int main() {
    DoublyList<int> mylist;
    mylist.push_front(5);
    mylist.push_front(7);
    mylist.push_front(9);
    mylist.push_front(6);
    mylist.push_front(1);
    mylist.print();

    return 0;
}