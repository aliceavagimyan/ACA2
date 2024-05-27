#include "matrix.hpp"
int main() {
    std::string fileA = "matrixA.txt";
    std::string fileB = "matrixB.txt";
    std::string resultFile = "resultMatrix.txt";

    Matrix<int> matrixA(3, 3);
    Matrix<int> matrixB(3, 2);

 
    matrixA.initializeMatrix();
    matrixB.initializeMatrix();

    matrixA.saveToFile(fileA);
    matrixB.saveToFile(fileB);

    matrixA = Matrix<int>::readFromFile(fileA);
    matrixB = Matrix<int>::readFromFile(fileB);

    std::cout << "Matrix A:"<<std::endl;
    matrixA.printMatrix();
    std::cout << "Matrix B:"<<std::endl;
    matrixB.printMatrix();

  
        Matrix<int> resultMatrix (3,3);
        resultMatrix= matrixA*matrixB;

        
        std::cout << "Result Matrix:"<<std::endl;
        resultMatrix.printMatrix();

        resultMatrix.saveToFile(resultFile);
         
    Matrix<std::string> stringMatrixA(2, 2);
    Matrix<std::string> stringMatrixB(2, 3);

    
    Matrix<std::string> stringMatrixC = stringMatrixA;


    stringMatrixB = stringMatrixA;
 // Attempt to print the matrices (will output error message)
    std::cout << "String Matrix A:" << std::endl;
    stringMatrixA.printMatrix();

    std::cout << "String Matrix B:" << std::endl;
    stringMatrixB.printMatrix();

    std::cout << "String Matrix C:" << std::endl;
    stringMatrixC.printMatrix();
   

    return 0;
}