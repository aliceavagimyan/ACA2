#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <iostream>
#include <ctime>

template <typename T>
class Matrix
{
public:
    Matrix(const int &row, const int &col);
    ~Matrix();
    Matrix(const Matrix &matrix2);
    Matrix &operator=(const Matrix &matrix2);
    // prefix
    void initializeMatrix();
    void printMatrix() const;
    T& at(int row,int col);

private:
    int m_row;
    int m_col;
    T **m_matrix;
};

// Implementation of the templated class methods

template <typename T>
Matrix<T>::Matrix(const int &row, const int &col) : m_row(row), m_col(col)
{
    m_matrix = new T*[m_row];
    for (int i = 0; i < m_row; ++i)
    {
        m_matrix[i] = new T[m_col];
    }
}

template <typename T>
Matrix<T>::~Matrix()
{
    for (int i = 0; i < m_row; ++i)
    {
        delete[] m_matrix[i];
    }
    delete[] m_matrix;
}

template <typename T>
Matrix<T>::Matrix(const Matrix &matrix2) : m_row(matrix2.m_row), m_col(matrix2.m_col)
{
    m_matrix = new T*[m_row];
    for (int i = 0; i < m_row; ++i)
    {
        m_matrix[i] = new T[m_col];
        for (int j = 0; j < m_col; ++j)
        {
            m_matrix[i][j] = matrix2.m_matrix[i][j];
        }
    }
}

template <typename T>
Matrix<T>& Matrix<T>::operator=(const Matrix &matrix2)
{
    if (this == &matrix2)
        return *this;

    for (int i = 0; i < m_row; ++i)
    {
        delete[] m_matrix[i];
    }
    delete[] m_matrix;

    m_row = matrix2.m_row;
    m_col = matrix2.m_col;

    m_matrix = new T*[m_row];
    for (int i = 0; i < m_row; ++i)
    {
        m_matrix[i] = new T[m_col];
        for (int j = 0; j < m_col; ++j)
        {
            m_matrix[i][j] = matrix2.m_matrix[i][j];
        }
    }

    return *this;
}


template <typename T>
void Matrix<T>::initializeMatrix()
{
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < m_row; ++i)
    {
        for (int j = 0; j < m_col; ++j)
        {
            m_matrix[i][j] = static_cast<T>(rand() % 100);
        }
    }
}

template <typename T>
void Matrix<T>::printMatrix() const
{
    for (int i = 0; i < m_row; ++i)
    {
        for (int j = 0; j < m_col; ++j)
        {
            std::cout << m_matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
template <typename T>
T& Matrix<T>:: at(int row, int col)
{
    if (row < 0 || row >= m_row || col < 0 || col >= m_col)
    {
        throw std::out_of_range("Index out of range");
    }
    return m_matrix[row][col];
}


#endif // MATRIX_HPP
