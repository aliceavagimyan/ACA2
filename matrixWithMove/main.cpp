#include "matrix.hpp"
int main(){
    Matrix myMatrix(3,4);
    myMatrix.initializeMatrix();
    myMatrix.printMatrix();

    Matrix matrix2(std::move(myMatrix));
    matrix2.printMatrix();
     
     Matrix matrix3(3,4);

     matrix3=std::move(matrix2);
    
    matrix3.printMatrix();

    return 0;
}