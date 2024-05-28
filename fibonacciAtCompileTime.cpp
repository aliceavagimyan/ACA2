#include <iostream>
template <int T>
struct Fibonacci{
    static const int val=Fibonacci<T-1>::val+Fibonacci<T-2>::val;
};
template <>
struct Fibonacci<0>{
   static const int val=0;

};
template <>
struct Fibonacci<1>{
   static const int val=1;
};
int main(){
    const int result=Fibonacci<9>::val;
      std::cout<<"fibonacci at 9:"<<result<<std::endl;
      return 0;
}