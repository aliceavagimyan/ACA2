#include "matrix.hpp"
int main(){
    Matrix<int> myMatrix(4,3);
    myMatrix.initializeMatrix();
    myMatrix.printMatrix();
     try{
    std::cout<<myMatrix.at(1,2)<<std::endl;
    }
    catch(const std::out_of_range exc){
        std::cout<<exc.what()<<std::endl;
    }
    try{
    std::cout<<myMatrix.at(7,8)<<std::endl;
    }
    catch(const std::out_of_range exc){
        std::cout<<exc.what()<<std::endl;
    }
    return 0;
}