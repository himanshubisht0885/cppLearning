#include <iostream>

int main(){
    //raw variable that can be modified
    std::cout<<"raw variable that can be modified --------"<<std::endl;
    std::cout<<"variable that can be modified----"<<std::endl;
    int k {4};
    std::cout<<"value : "<<k<<std::endl;
    std::cout<<"&value : "<<&k<<std::endl;
    k += 6;
    std::cout<<"modifying variable-----"<<std::endl;
    std::cout<<"value : "<<k<<std::endl;
    std::cout<<"&value : "<<&k<<std::endl; //same location

    //non const pointer to non const data
    std::cout<<"non const pointer to non const data-----"<<std::endl;
    int *p {nullptr};
    int n1 {40};
    std::cout<<"value of p : "<<p<<std::endl;
    std::cout<<"value of *p : "<<*p<<std::endl;


    return 0;
}