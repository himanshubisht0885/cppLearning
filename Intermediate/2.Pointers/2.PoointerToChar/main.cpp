#include <iostream>

int main(){
   char *p{};
   char a {'A'};
   p = &a;
   const char *q {"hello"};
   std::cout<<"value of q : "<<q<<std::endl;
   std::cout<<"value of *q : "<<*q<<std::endl;
    return 0;
}