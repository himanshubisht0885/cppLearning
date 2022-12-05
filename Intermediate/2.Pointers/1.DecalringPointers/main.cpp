#include <iostream>

int main(){
    int *p_number {}; //can only store address of a vaiable of type int
    double *q_number {}; //can only store address of a vaiable of type double
    //eplicitely initialize to nullptr
    int *a_number {nullptr};
    double *b_number {nullptr};
    std::cout<<a_number<<std::endl;
    std::cout<<b_number<<std::endl;
    std::cout<<"size of pointer a : "<<sizeof(a_number)<<std::endl;
    return 0;
}