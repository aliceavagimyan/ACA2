#include "matrix.hpp"
int main() {
    std::string fileA = "matrixA.txt";
    std::string fileB = "matrixB.txt";
    std::string resultFile = "resultMatrix.txt";

    Matrix matrixA(3, 3);
    Matrix matrixB(3, 3);

 
    matrixA.initializeMatrix();
    matrixB.initializeMatrix();

    matrixA.saveToFile(fileA);
    matrixB.saveToFile(fileB);

    matrixA = Matrix::readFromFile(fileA);
    matrixB = Matrix::readFromFile(fileB);

    std::cout << "Matrix A:"<<std::endl;
    matrixA.printMatrix();
    std::cout << "Matrix B:"<<std::endl;
    matrixB.printMatrix();

  
        Matrix resultMatrix = matrixA.multiply(matrixB);

        
        std::cout << "Result Matrix:"<<std::endl;
        resultMatrix.printMatrix();

        resultMatrix.saveToFile(resultFile);
   

    return 0;
}