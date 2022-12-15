#include <iostream>

int main(){
    //Const pointer to non const data
    int var {33};
    int * const p {&var};
    std::cout<<"value of p : "<<p<<std::endl;
    std::cout<<"value of *p : "<<*p<<std::endl;
    *p = 44;
    std::cout<<"value of p : "<<p<<std::endl;
    std::cout<<"value of *p : "<<*p<<std::endl;
    int n {3};
    //p = &n ; // compiler error
    return 0;
}