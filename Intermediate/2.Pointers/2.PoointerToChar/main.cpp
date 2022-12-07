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
    // string literal made of const char . trying modifying any of them will result in disaster!
    *z = 'b'; // edit to say bello
    std::cout<<"value of *z : "<<*z<<std::endl;
    return 0;
}