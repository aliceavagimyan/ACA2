#include <iostream>
#include <ctime>
int* oddNumbers(int* array,int& myNewArraySize,int size){
    int count=0;
    for(int i =0;i<size;++i){
       if( array[i]%2==1){
         count++;
       }
    }
    myNewArraySize=count;
    int* newArray=new int[count];
    int index=0;
     for(int i=0;i<size ;++i){
       if( array[i]%2==1){
        newArray[index++]=array[i];
    }
 }

 return newArray;
}
void showArrays(int* array,int size){
    for (int i=0;i<size;++i){
        std::cout<<array[i]<<" ";
    }
}
void deleteMyArrays(int* array){
    delete[] array;
}
int  main(){
    srand(time(0));
    std::cout<<"Enter the size of the array"<<std::endl;
    int size=0;
    std::cin>>size;
    if(size<20){
        std::cout<<"Error"<<std::endl;
        return 1;
    }
    int* array=new int[size];
    for(int i=0;i<size;++i){
           array[i] = rand()%1000;
    }
    
    int myNewArraySize=0;
    int* newArray=oddNumbers(array,size,myNewArraySize);
    std::cout<<"old array"<<std::endl;
    showArrays(array,size);
    std::cout<<std::endl;
    std::cout<<"new array"<<std::endl;
    showArrays(newArray,myNewArraySize);
    delete(array);
    delete(newArray);
    return 0;
}