#include <iostream>

int main(){
    //Const pointer to const data
    const int n1 {55};
    const int * const p {&n1};
    std::cout<<"value of p : "<<p<<std::endl;
    std::cout<<"value of *p : "<<*p<<std::endl;
    //*p=332; //compiler error
    int n2 {44};
    //p = &n2; //compiler error
    return 0;
}