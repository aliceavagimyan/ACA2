#include <iostream>
#include <ctime>

int** initializeMatrix(int **matrix, int rows, int cols)
{
    srand(time(0));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            matrix[i][j] = rand() % 10;
        }
    }
    return matrix;
}
int **printMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return matrix;
}

void deleteMatrix(int **matrix, int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
}
int **swapMatrix(int **matrix, int **newMatrix, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            newMatrix[j][i] = matrix[i][j];
        }
    }

    return newMatrix;
}

int main()
{
    int rows = 0;
    int cols = 0;
    std::cout << "enter the sizes of the matrix" << std::endl;
    std::cout << "rows:";
    std::cin >> rows;
    std::cout << "columns:";
    std::cin >> cols;

    int **myMatrix = new int *[rows];
    for (int i = 0; i < rows; ++i)
    {
        myMatrix[i] = new int[cols];
    }
    initializeMatrix(myMatrix, rows, cols);
    printMatrix(myMatrix, rows, cols);
    int **newMatrix = new int *[cols];
    for (int i = 0; i < cols; ++i)
    {
        newMatrix[i] = new int[rows];
    }
    swapMatrix(myMatrix, newMatrix, rows, cols);
    std::cout << "newMatrix:" << std::endl;
    printMatrix(newMatrix, cols, rows);
    deleteMatrix(myMatrix, rows);
    deleteMatrix(newMatrix, cols);
    myMatrix = nullptr;
    newMatrix = nullptr;
    return 0;
}