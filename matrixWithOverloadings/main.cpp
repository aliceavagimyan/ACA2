#include "matrix.hpp"
int main(){
    Matrix myMatrix(3,4);
    myMatrix.initializeMatrix();
    std::cout<<"Matrix Without changes:"<<std::endl;
    myMatrix.printMatrix();

    ++myMatrix;
    std::cout<<"Matrix after ++ prefix"<<std::endl;
    myMatrix.printMatrix();
   
   Matrix myMatrix1(3,4);
     myMatrix1.initializeMatrix();
     std::cout<<"Second matrix"<<std::endl;
     myMatrix1.printMatrix();
   myMatrix1++;
   std::cout<<"Matrix after ++ postfix"<<std::endl;
     myMatrix1.printMatrix();


    return 0;
}