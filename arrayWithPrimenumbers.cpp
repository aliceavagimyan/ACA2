#include <iostream>
#include <cmath>
#include <ctime>
bool is_Prime(int number){
if(number<=1){
    return false;
}

    for (int i = 2; i <= sqrt(number); ++i)
    {
        if (number % i == 0)
        {
            return false;
        }
    } 
    return true;
}

int **initializeMatrix(int **matrix, int size)
{
    srand(time(0));
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            matrix[i][j] = rand() % 10;
        }
    }
    return matrix;
}
int **printMatrix(int **matrix, int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return matrix;
}

void deleteMatrix(int **matrix, int size)
{
    for (int i = 0; i < size; ++i)
    {
        free( matrix[i]);
    }
    free( matrix);
}
int *arrayWithPrimes(int **matrix, int size, int &arraySize)
{
    int count = 0;
    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size; ++j) {
            if (is_Prime(matrix[i][j])) {
                count++;
            }
        }
    }
    arraySize = count;
    int* array =(int*)malloc(count*sizeof(int));
    int index = 0;
    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size; ++j)
        {
            if (is_Prime(matrix[i][j]))
            {
                array[index++] = matrix[i][j];
            }
        }
    }
    return array;
}

int main()
{
    int size = 0;
    std::cout << "enter the size of the matrix" << std::endl;
    std::cin >> size;
    int **myMatrix = (int**)malloc(size*sizeof(int*));
    for (int i = 0; i < size; ++i)
    {
        myMatrix[i] =(int*)malloc(size*(sizeof(int)));
    }
    int newArraySize = 0;
    initializeMatrix(myMatrix, size);
    printMatrix(myMatrix, size);
    int *myArray = arrayWithPrimes(myMatrix, size, newArraySize);
    for (int i = 0; i < newArraySize; ++i)
    {
        std::cout << myArray[i] << " ";
    }
    deleteMatrix(myMatrix, size);

    return 0;
}