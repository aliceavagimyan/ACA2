#include <iostream>

template <typename T1,typename T2>
std::pair<T1, T2> make_pair(T1&& first, T2&& second) {
    return std::pair<T1, T2>(std::forward<T1>(first), std::forward<T2>(second));
}
int main() {
    auto p = make_pair(1, 3.14);
    std::cout << "First: " << p.first << ", Second: " << p.second << std::endl;
    return 0;
}