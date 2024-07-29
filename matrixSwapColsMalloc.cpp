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

void freeMatrix(int** matrix,int size){
    for(int i=0;i<size;++i){
        free ( matrix[i]);
    }
    free(matrix);
   
}
int** swapCols(int** matrix,int size,int col1,int col2){
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
    int** myMatrix=(int**)malloc(size*sizeof(int*));

    for(int i=0;i<size;++i){
        myMatrix[i]=(int*)malloc(size*sizeof(int));
    }
    initializeMatrix(myMatrix,size);
    printMatrix(myMatrix,size);
    swapCols(myMatrix,size,i,j);
    std::cout<<"new matrix:"<<std::endl;
    printMatrix(myMatrix,size);
    freeMatrix(myMatrix,size);
    
return 0;
}