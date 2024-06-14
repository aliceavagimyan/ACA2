#include <iostream>
#include <map>
#include <string>

std::string numbersToString(int n) {
    std::map<int, std::string> numbers = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"},
        {10, "Ten"}
    };
    
     auto it = numbers.find(n);
    if (it != numbers.end()) {
        return it->second; 
    } else {
        return "Number not found"; 
    }
}

int main() {
    std::cout << numbersToString(7) << std::endl;
    return 0;
}