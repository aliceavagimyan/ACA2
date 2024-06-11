#include <iostream>
#include <vector>
#include <cmath>
template <typename T>
void print(const std::vector<T>& vec) {
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    std::vector<int> vec={1,0,2,4,7,6,10,8};
    auto it=vec.begin();
     while(it!=vec.end()){
        if(isPrime(*it)){
            it=vec.erase(it);
        }
        else{
            ++it;
        }
     }
     print(vec);
     
  return 0;
}