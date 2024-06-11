//#include "stackwithVec.hpp"
#include "stackwithList.hpp"
int main(){
Stack<int> stack; 
    stack.push(10); 
     stack.push(20); 
     stack.push(30); 
    stack.push(40); 
    stack.print();
    std::cout << "Current size of the stack is " << stack.size() 
         << std::endl; 
   stack.pop();
   stack.print();
   std::cout<<"top element after popping "<<stack.top()<<std::endl;
/*Stack<int> mystack;
 mystack.push(1);
 mystack.push(5);
  mystack.push(7);
  mystack.push(6);
  mystack.push(3);
  mystack.push(2);

  mystack.pop();
 std::cout<<mystack.top()<<std::endl;*/
 
    return 0;
}