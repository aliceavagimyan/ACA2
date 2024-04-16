#include <iostream>
#include <ctime>
#include <cstdlib>

void initializeMatrix(int *matrix, int size) {
    std::srand(std::time(nullptr)); // Seed the random number generator once

    for (int i = 0; i < size*size; ++i) {
        matrix[i] = std::rand() % 10;
    }
}

void printMatrix(int *matrix, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i * size + j] << " ";
        }
        std::cout << std::endl;
    }
}

void swapMatrix(int *matrix, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            int index1 = i * size + j;
            int index2 = j * size + i;
            std::swap(matrix[index1], matrix[index2]);
        }
    }
}

int main() {
    int size = 0;
    std::cout << "Enter the size of the matrix: ";
    std::cin >> size;

    int *myMatrix = new int[size*size];
    initializeMatrix(myMatrix, size);

    std::cout << "Original Matrix:" << std::endl;
    printMatrix(myMatrix, size);

    swapMatrix(myMatrix, size);

    std::cout << "\nTransposed Matrix:" << std::endl;
    printMatrix(myMatrix, size);

    delete[] myMatrix;
    myMatrix = nullptr;

    return 0;
}