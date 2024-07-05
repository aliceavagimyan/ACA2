#include "vector.hpp"
int main(){
    Vector<int> myVector;
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.print();
     try{
    std::cout<<myVector.at(1)<<std::endl;
    }
    catch(const std::out_of_range exc){
        std::cout<<exc.what()<<std::endl;
    }
    try{
    std::cout<<myVector.at(5)<<std::endl;
    }
    catch(const std::out_of_range exc){
        std::cout<<exc.what()<<std::endl;
    }
    return 0;
}