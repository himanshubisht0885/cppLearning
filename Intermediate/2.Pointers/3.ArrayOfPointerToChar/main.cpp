#include <iostream>

int main(){
   const char * p [] {
    "hello",
    "abc",
    "xyz"
   };
   std::cout<<p<<std::endl;
   std::cout<<*p<<std::endl;
   const char *z {"hello"};
   std::cout<<z<<std::endl;
   std::cout<<*z<<std::endl;

    return 0;
}