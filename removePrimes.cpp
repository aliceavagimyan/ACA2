#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> myVec = {1, 2, 4, 3, 7, 9, 5, 11,14};
    myVec.erase(std::remove_if(myVec.begin(), myVec.end(), [](int num) -> bool {
        if (num <= 1) return false;
        for (int i = 2; i <= std::sqrt(num); ++i) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }), myVec.end());

    std::for_each(myVec.begin(), myVec.end(), [](int num) {
        std::cout << num << " ";
    });
    return 0;
}