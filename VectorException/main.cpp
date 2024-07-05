#include "vector.hpp"
#include <iostream>

int main() {
    try {
        Vector<int> vec;
        vec.print(); 

    } catch (const MyException& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}