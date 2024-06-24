#include <iostream>
#include <functional>

int main() {
    
    std::function<std::function<int(int)>(int)> multiply = [](int n) {
        return [n](int m) {
            return n * m;
        };
    };

   
    int result = multiply(5)(6); 
    std::cout << result << std::endl;

    return 0;
}