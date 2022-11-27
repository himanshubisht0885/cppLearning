#include <iostream>

int main(){
    int value {45};
    std::cout<<"value is : "<<value<<std::endl;
    value+=5;
    std::cout<<"value+=5 is : "<<value<<std::endl;
    value*=2;
    std::cout<<"value*=2 is : "<<value<<std::endl;
    value/=3;
    std::cout<<"value/=3 is : "<<value<<std::endl;
    value%=11;
    std::cout<<"value%11 is : "<<value<<std::endl;
    return 0;
}