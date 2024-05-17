#include "matrix.hpp"
Matrix::Matrix(const int &row, const int &col) : m_row(row), m_col(col){
        m_matrix = new int *[row];
        for (int i = 0; i < m_row; ++i)
        {
            m_matrix[i] = new int[m_col];
        }
    }
Matrix::~Matrix(){
        for (int i = 0; i < m_row; ++i)
        {
            delete []m_matrix[i];
        }
        delete[] m_matrix;
    }
 Matrix::Matrix(const Matrix& matrix2)
    {
        m_row = matrix2.m_row;
        m_col = matrix2.m_col;
        m_matrix = new int *[m_row];
        for (int i = 0; i < m_row; ++i)
        {
            m_matrix[i] = new int[m_col];
            for (int j = 0; j < m_col; ++j)
            {
               m_matrix[i][j] = matrix2.m_matrix[i][j];
            }
        }
    }
Matrix& Matrix::operator=(const Matrix &matrix2)
    {
        if (this != &matrix2)
        {
            for (int i = 0; i < m_row; ++i)
            {
                delete m_matrix[i];
            }
            delete[] m_matrix;
            m_row = matrix2.m_row;
            m_col = matrix2.m_col;
            m_matrix = new int *[m_row];
            for (int i = 0; i < m_row; ++i)
            {
                m_matrix[i] = new int[m_col];
                for (int j = 0; j < m_col; ++j)
                {
                    m_matrix[i][j] = matrix2.m_matrix[i][j];
                }
            }
        }
         return *this;
    }
Matrix::Matrix(Matrix&& other):m_row(0),m_col(0),m_matrix(nullptr){
    m_row=other.m_row;
    m_col=other.m_col;
    m_matrix=other.m_matrix;

    other.m_row=0;
    other.m_col=0;
    other.m_matrix=nullptr;
     std::cout<<"move ctor"<<std::endl;
}
Matrix& Matrix::operator=(Matrix&& other){
    if(this!=&other){
        for (int i=0;i<m_row;++i){
            delete [] m_matrix[i];
        }
        delete [] m_matrix;
     m_row=other.m_row;
    m_col=other.m_col;
    m_matrix=other.m_matrix;

    other.m_row=0;
    other.m_col=0;
    other.m_matrix=nullptr;
  std::cout<<"move operator ="<<std::endl;
    }
    return *this;
}
void  Matrix::initializeMatrix(){
    srand(time(0));
    for (int i = 0; i < m_row; ++i)
    {
        for (int j = 0; j < m_col; ++j)
        {
            m_matrix[i][j] = rand() % 10;
        }
    }
 }
    void Matrix::printMatrix()
{
    for (int i = 0; i < m_row; ++i)
    {
        for (int j = 0; j < m_col; ++j)
        {
            std::cout <<m_matrix[i][j] << " ";
        }
        std::cout << std::endl;
    } 
}
