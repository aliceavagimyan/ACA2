#include <iostream>
#include <ctime>


int *initializeMatrix(int *matrix, int size) {
   srand(time(0));
    for (int i = 0; i < size*size; ++i) {
        matrix[i] = std::rand() % 10;
    }
    return matrix;
}

int* printMatrix(int *matrix, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i * size + j] << " ";
        }
        std::cout << std::endl;
    }
    return matrix;
}

int* swapMatrix(int *matrix, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            int index1 = i * size + j;
            int index2 = j * size + i;
            std::swap(matrix[index1], matrix[index2]);
        }
    }
    return matrix;
}

int main() {
    int size = 0;
    std::cout << "Enter the size"<<std::endl;
    std::cin >> size;

    int *myMatrix = new int[size*size];
    initializeMatrix(myMatrix, size);

   
    printMatrix(myMatrix, size);

    swapMatrix(myMatrix, size);

    std::cout << "New Matrix:" << std::endl;
    printMatrix(myMatrix, size);

    delete[] myMatrix;
    myMatrix = nullptr;

    return 0;
}
