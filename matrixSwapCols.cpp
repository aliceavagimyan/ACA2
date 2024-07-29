#include <iostream>
#include <ctime>

int** initializeMatrix(int** matrix,int size){
    srand(time(0));
    for(int i=0;i<size;++i){
        for(int j=0;j<size;++j){
            matrix[i][j]=rand()%10;
        }
    }
    return matrix;
}
int** printMatrix(int** matrix,int size){
    for(int i=0;i<size;++i){
        for(int j=0;j<size;++j){
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return matrix;
}

void deleteMatrix(int** matrix,int size){
    for(int i=0;i<size;++i){
        delete [] matrix[i];
    }
    delete [] matrix;
    matrix=nullptr;
}
int** swapRows(int** matrix,int size,int col1,int col2){
    for(int i=0;i<size;++i){
        int temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }
    return matrix;
}



int main(){
    int size=0;
    std::cout<<"enter the size of the matrix"<<std::endl;
    std::cin>>size;
    int i=0;
    int j=0;
    std::cout<<"enter the first index to swap"<<std::endl;
    std::cin>>i;
    std::cout<<"enter the second index to swap"<<std::endl;
    std::cin>>j;
    int** myMatrix=new int*[size];
    for(int i=0;i<size;++i){
        myMatrix[i]=new int[size];
    }
    initializeMatrix(myMatrix,size);
    printMatrix(myMatrix,size);
    swapRows(myMatrix,size,i,j);
    std::cout<<"new matrix:"<<std::endl;
    printMatrix(myMatrix,size);
    deleteMatrix(myMatrix,size);
     myMatrix=nullptr;
return 0;
}