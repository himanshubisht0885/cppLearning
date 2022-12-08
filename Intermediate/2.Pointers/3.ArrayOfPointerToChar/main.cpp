#include <iostream>

int main(){
   const char * p [] {
    "hello",
    "abc",
    "xyz"
   };
   std::cout<<p<<std::endl;
   std::cout<<*p<<std::endl;

    return 0;
}