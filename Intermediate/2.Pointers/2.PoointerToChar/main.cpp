#include <iostream>

int main(){
   char *p{};
   char a {'A'};
   p = &a;
   const char *q {"hello"};
   std::cout<<"value of q : "<<q<<std::endl;
   std::cout<<"value of *q : "<<*q<<std::endl;
   //special properties of pointers with string literals
   const char *z = {"hello"};
   std::cout<<"value of z : "<<z<<std::endl;
   std::cout<<"value of *z : "<<*z<<std::endl; //return first liiter of string
    return 0;
}