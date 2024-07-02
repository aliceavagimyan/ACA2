#include <iostream>
#include <cmath>

int division(int& a,int& b){
    if(a==0){
        std::cout<<'0'<<std::endl;
    }
    if(b==0){
        std::cout<<"division by 0"<<std::endl;
    }
    bool negative=(a<0)^(b<0);

    int a1=abs(a);
    int b1=abs(b);

    int left=0;
    int right=a1;
    int answer=0;
     while(left<=right){
        double mid=left+(right-left)/2;
        if(mid*b1<=a1){
            answer=mid;
            left=mid+1;
        }
        else{
            right=mid-1;
        }
     }
     return negative ? -answer:answer;
}
int main() {
    int a= 24;
    int b=7;
    
  std::cout << "Result: " << a<< " / " << b << " = " << division(a,b) << std::endl;
   
    
    return 0;
}