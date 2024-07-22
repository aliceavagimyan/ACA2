#include <iostream>
#include <vector>
#include <thread>

void sumRow(const std::vector<int>& row, int& result) {
    result = 0;
    for (int val : row) {
        result += val;
    }
}

int main() {
   
   std::vector < std::vector < int >>matrix(1000 , std::vector<int>(1000 , 1));
    int numRows = matrix.size();
    std::vector<std::thread> threads(numRows);
    std::vector<int> results(numRows, 0);


    for (int i = 0; i < numRows; ++i) {
        threads[i] = std::thread(sumRow, std::cref(matrix[i]), std::ref(results[i]));
    }

    
    for (int i = 0; i < numRows; ++i) {
        threads[i].join();
    }

    
    int totalSum = 0;
    for (int result : results) {
        totalSum += result;
    }

    std::cout << "sum= " << totalSum << std::endl;

    return 0;
}
