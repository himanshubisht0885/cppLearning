#include <iostream>

int main(){
    std::cout<<"Welcome to box calculator. Please type in length, width and height information :"<<std::endl;
    float l,w,h;
    std::cout<<"length : ";std::cin>>l;
    std::cout<<"width : ";std::cin>>w;
    std::cout<<"height : ";std::cin>>h;
    std::cout<<"The Base area is : "<<l*w<<std::endl;
    std::cout<<"The Volume is : "<<l*w*h<<std::endl;
    return 0;
}