#include <iostream>

int main(){
    //non const pointer to non const data
    std::cout<<"non const pointer to non const data-----"<<std::endl;
    int *p {nullptr};
    int n1 {40};
    std::cout<<"value of p : "<<p<<std::endl;
    //std::cout<<"value of *p : "<<*p<<std::endl;
    std::cout<<"---------------"<<std::endl;

    p=&n1;
    std::cout<<"value of p : "<<p<<std::endl;
    std::cout<<"value of *p : "<<*p<<std::endl;
    std::cout<<"---------------"<<*p<<std::endl;
    *p = 432; //change the pointed value through pointer
    std::cout<<"modifying *p----"<<std::endl;
    std::cout<<"value of n1 : "<<n1<<std::endl;
    std::cout<<"value of p : "<<p<<std::endl;
    std::cout<<"value of *p : "<<*p<<std::endl;
    std::cout<<"---------------"<<*p<<std::endl;
    int n2 {20};
    p=&n2; //change the pinter itself to make it pointed somewhere else
    std::cout<<"value of p : "<<p<<std::endl;
    std::cout<<"value of *p : "<<*p<<std::endl;
    std::cout<<"---------------"<<*p<<std::endl;

    return 0;
}