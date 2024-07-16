#include <iostream>
#include <memory>
#include <ctime>

template <typename T>
class Matrix
{
public:
    Matrix(int rows, int cols) : m_rows(rows), m_cols(cols)
    {
        m_matrix = std::make_unique<std::unique_ptr<T[]>[]>(m_rows);
        for (int i = 0; i < m_rows; ++i)
        {
            m_matrix[i] = std::make_unique<T[]>(m_cols);
        }
    }
    void initializeMatrix()
    {
        srand(time(0));
        for (int i = 0; i < m_rows; ++i)
        {
            for (int j = 0; j < m_cols; ++j)
            {
                m_matrix[i][j] = rand() % 10;
            }
        }
    }
    void printMatrix()
    {
        for (int i = 0; i < m_rows; ++i)
        {
            for (int j = 0; j < m_cols; ++j)
            {
                std::cout << m_matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

private:
    int m_rows;
    int m_cols;

    std::unique_ptr<std::unique_ptr<T[]>[]> m_matrix;
};

int main()
{

    Matrix<int> intMatrix(5, 7);
    intMatrix.initializeMatrix();
    intMatrix.printMatrix();

    return 0;
}