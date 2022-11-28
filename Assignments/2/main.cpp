#include <iostream>

int main(){
    std::cout<<"Please enter a degree value in Celsius"<<std::endl;
    double a;
    std::cin>>a;
    std::cout<<a<<" Celsius is "<<(9.0/5)*a+32<<" Fahrenheit";
    return 0;
}