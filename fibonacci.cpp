#include <iostream>
int fibonacci(int number){
    if (number<=1){
    return number;
    }
   return fibonacci(number-1)+fibonacci(number-2);
}
int main(){
    std::cout<<"enter a number"<<std::endl;
    unsigned int myNumber=0;
    std::cin>>myNumber;
    std::cout<<"fibonacci's "<< myNumber<<"th number is "<<fibonacci(myNumber)<<std::endl;
    return 0;
}
