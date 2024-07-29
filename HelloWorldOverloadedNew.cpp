#include <iostream>
void* operator new(size_t size){
    std::cout<<"hello World"<<std::endl;
    if(void* mem=malloc(size)){
        return mem;
    }
    else{
        throw std::bad_alloc();
    }
}
int main(){
    int* myptr=new int(10);
    delete myptr;
    myptr=nullptr;
    return 0;
}
