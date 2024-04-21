#include <iostream>
#include <ctime>
class Matrix{
    public:
    Matrix(const int& _row,const int& _col){
            row=_row;
            col=_col;
            matrix=new int*[row];
            for(int i=0;i<row;++i){
                matrix[i]=new int[col];
            }
    }
    ~Matrix(){
        for(int i=0;i<row;++i){
            delete matrix[i];
    }
    delete []matrix;
    }
    Matrix(const Matrix& matrix2,const int& row1,const int& col1){
         row=matrix2.row;
    col=matrix2.col;
         matrix=new int*[row];
            for(int i=0;i<row;++i){
                matrix[i]=new int[col];
                for(int j=0;j<col;++j){
                   matrix2.matrix[i][j]=matrix[i][j];
                }
            }

    }
  Matrix& operator=(const Matrix& matrix2){
   
     matrix=new int*[row];
            for(int i=0;i<row;++i){
                matrix[i]=new int[col];
                for(int j=0;j<col;++j){
                   matrix[i][j]=matrix2.matrix[i][j];
                }
            }
            return *this;
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


private :
int row;
int col;
int** matrix;

};
int main(){
    Matrix myMatrix(3,5);
    myMatrix.initializeMatrix();
    std::cout<<"My first matrix:"<<std::endl;
    myMatrix.printMatrix();
    Matrix myMatrix2(3,5);
    myMatrix2=myMatrix;
    std::cout<<"My second matrix :"<<std::endl;
    myMatrix2.printMatrix();
    return 0;
}