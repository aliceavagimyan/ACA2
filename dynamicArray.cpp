#include <iostream>
int  main(){
    std::cout<<"Enter the size of the array"<<std::endl;
    int size=0;
    std::cin>>size;
    if(size<0){
        std::cout<<"Error"<<std::endl;
        return 1;
    }
    int* array=new int[size];
    std::cout<<"enter the array elements"<<std::endl;
    for(int i=0;i<size;++i){
        std::cin>>array[i];
    }
    std::cout<<"array elements: ";
    for(int i=0;i<size;++i){
        std::cout<<array[i]<<" ";
    }
     delete [] array;
     return 0;

}