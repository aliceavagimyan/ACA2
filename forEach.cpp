#include <iostream>
#include <vector>
#include <algorithm>

template <typename InputIterator, typename Function>
Function my_for_each(InputIterator first, InputIterator last, Function f) {
    for (; first != last; ++first) {
        f(*first);
    }
    return f;
}


void process(int x) {
    std::cout << x*x << " ";
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    my_for_each(vec.begin(), vec.end(), process);

    return 0;
}