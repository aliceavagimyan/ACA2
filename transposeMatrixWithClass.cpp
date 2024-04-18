#include <iostream>
#include <ctime>
class Matrix{
    public:
    int** createMatrix(const int& a,const int& b){
        row=a;
        col=b;
        matrix=new int*[row];
        for (int i = 0; i < row; ++i){
        matrix[i] = new int[col];
        }
        return matrix;
    }
    void createNewMatrix(){
        newMatrix=new int*[col];
        for (int i = 0; i < col; ++i){
        newMatrix[i] = new int[row];
        }
    }
        

 void initializeMatrix(){
    srand(time(0));
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            matrix[i][j] = rand() % 10;
        }
    }


 }
 void printMatrix()
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
  
   
}
void printNewMatrix()
{
    for (int i = 0; i < col; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            std::cout << newMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void deleteMatrix()
{
    for (int i = 0; i < row; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
}

void swapMatrix()
{
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            newMatrix[j][i] = matrix[i][j];
        }
    }

}

private :
int row;
int col;
int** matrix;
int** newMatrix;
};
int main(){
    Matrix myMatrix;
    myMatrix.createMatrix(3,5);
    myMatrix.initializeMatrix();
    myMatrix.printMatrix();
    myMatrix.createNewMatrix();
    std::cout<<"transposed matrix"<<std::endl;
    myMatrix.swapMatrix();
    myMatrix.printNewMatrix();
    myMatrix.deleteMatrix();
}