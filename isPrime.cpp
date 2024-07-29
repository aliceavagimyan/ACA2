#include <iostream>
#include <cmath>
bool is_Prime(int number){
    for (int i = 2; i <= sqrt(number); ++i){
        if (number % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    std::cout<<"enter a number "<<std::endl;
    unsigned int myNumber=0;
    std::cin>>myNumber;
    if(is_Prime(myNumber)){
        std::cout<<"the given number is prime"<<std::endl;
    }
    else{
        std::cout<<"the given number is not prime"<<std::endl;
    }
    return 0;

}