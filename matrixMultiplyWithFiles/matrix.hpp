#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>
#include <ctime>
#include <fstream>
#include <stdexcept>
class Matrix {
public:
    Matrix(const int& _row, const int& _col);

    ~Matrix() ;

    Matrix(const Matrix& matrix2) ;
    Matrix& operator=(const Matrix& matrix2);

    void initializeMatrix();

    void saveToFile(const std::string& filename);
    Matrix multiply(const Matrix& other) const;

    void printMatrix();

    static Matrix readFromFile(const std::string& filename);
private:
    int row;
    int col;
    int** matrix;
};

#endif //MATRIX_HPP
