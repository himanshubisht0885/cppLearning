#include <iostream>

int main(){
    //Pointer to const
    int n1 {14};
    const int *p {&n1};
    std::cout<<"value of p : "<<p<<std::endl;
    std::cout<<"value of *p : "<<*p<<std::endl;
    //*p = 444;  //compile error
    int n2 {444};
    p = &n2;
    std::cout<<"value of p : "<<p<<std::endl;
    std::cout<<"value of *p : "<<*p<<std::endl;
    return 0;
}