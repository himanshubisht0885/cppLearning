#include <iostream>

int main(){
    int a {2124};
    int *p_number {&a}; //can only store address of a vaiable of type int
    double *q_number {}; //can only store address of a vaiable of type double
    //eplicitely initialize to nullptr
    int *a_number {nullptr};
    double *b_number {nullptr};
    std::cout<<"a pointer : "<<a_number<<std::endl;
    std::cout<<"b pointer : "<<b_number<<std::endl;
    std::cout<<"size of pointer a : "<<sizeof(a_number)<<std::endl;
    std::cout<<"value of a : "<<std::endl;
    std::cout<<"value of p : "<<p_number<<"size of pointer p : "<<sizeof(p_number)<<std::endl;
    a =1313;
    p_number = &a;
    std::cout<<"value of a : "<<std::endl;
    std::cout<<"value of p : "<<p_number<<"size of pointer p : "<<sizeof(p_number)<<std::endl;
    return 0;
}