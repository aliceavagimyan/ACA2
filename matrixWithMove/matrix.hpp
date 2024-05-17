#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>
#include <ctime>

class Matrix
{
    public:
    Matrix(const int &row,const int &col) ;
    ~Matrix();
    Matrix(const Matrix &matrix2);
    Matrix &operator=(const Matrix &matrix2) ;
    Matrix(Matrix&& other);
    Matrix& operator=(Matrix&&other);
    
    void initializeMatrix();
    void printMatrix();
private:
    int m_row;
    int m_col;
    int **m_matrix;
};

#endif // Matrix_HPP