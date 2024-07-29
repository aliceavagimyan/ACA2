#include <iostream>
int factorial(int number){
    if(number==0){
        return 1;
    }
    return number*factorial(number-1);
}
int main(){
    std::cout<<"enter a number "<<std::endl;
    unsigned int myNumber=0;
    std::cin>>myNumber;
    std::cout<<"factorial of "<<myNumber<<" is "<<factorial(myNumber)<<std::endl;
    return 0;
}