#include <iostream>
#include <list>
#include <iterator>

template <typename T>
void print(const std::list<T>& list) {
    for (auto it = list.begin(); it != list.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

template <typename T>
double arithmeticMean(const std::list<T>& numbers) {
    if (numbers.empty()) {
        std::cout << "The list is empty" << std::endl;
        return 0.0;
    }

    double sum = 0.0;
    auto it =numbers.begin();
  for (it; it != numbers.end(); ++it) {
        sum += *it;
    }
    return sum / numbers.size();
}

int main() {
    std::list<int> list = {1, 0, 2, 6, 7, 5, 1, 8};

    double mean = arithmeticMean(list);
    std::cout << "Arithmetic Mean: " << mean << std::endl;

    auto it = list.begin();
    while (it != list.end()) {
        if (*it < mean) {
            it = list.erase(it);
        } else {
            ++it;
        }
    }

    print(list);

    return 0;
}