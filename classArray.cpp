#include <iostream>
#include <ctime>

class Array{
public:
   Array(const int& size):m_size(size){
    array=new int[size];
   }
   ~Array(){
    delete [] array;
   }
   int& operator [](int index)  {
    if(index>=0 && index<m_size)
    return array[index];
}
int getSize() const {
    return m_size;
}
friend std::ostream& operator<<(std::ostream& out,const Array& A);
    private:
    int* array;
    int m_size;
};
std::ostream& operator<<(std::ostream& out, const Array& A) {
    for (int i = 0; i < A.m_size; ++i) {
        out << A.array[i] << " ";
    }
    out << std::endl;
    return out;
}


int main(){
       srand(time(0));
    Array arr(5);
    for(int i=0;i<arr.getSize();++i){
        arr[i]=rand()%10;
    }
    std::cout<<arr;
 return 0;
}
