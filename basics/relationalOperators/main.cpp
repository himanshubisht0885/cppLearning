#include <iostream>

int main(){
    int n1 {45};
    int n2 {60};
    std::cout<<"number 1 : "<<n1<<std::endl;
    std::cout<<"number 2 : "<<n2<<std::endl;
    std::cout<<"Comparing numbers"<<std::endl;
    std::cout<<"number 1 < number2 : "<<(n1<n2)<<std::endl;
    std::cout<<"number 1 > number2 : "<<(n1>n2)<<std::endl;
    std::cout<<"number 1 <= number2 : "<<(n1<=n2)<<std::endl;
    std::cout<<"number 1 >= number2 : "<<(n1>=n2)<<std::endl;
    std::cout<<"number 1 == number2 : "<<(n1==n2)<<std::endl;
    std::cout<<"number 1 != number2 : "<<(n1!=n2)<<std::endl;

    std::cout<<"in true/false"<<std::endl;
    std::cout<<std::boolalpha;
    std::cout<<"Comparing numbers"<<std::endl;
    std::cout<<"number 1 < number2 : "<<(n1<n2)<<std::endl;
    std::cout<<"number 1 > number2 : "<<(n1>n2)<<std::endl;
    std::cout<<"number 1 <= number2 : "<<(n1<=n2)<<std::endl;
    std::cout<<"number 1 >= number2 : "<<(n1>=n2)<<std::endl;
    std::cout<<"number 1 == number2 : "<<(n1==n2)<<std::endl;
    std::cout<<"number 1 != number2 : "<<(n1!=n2)<<std::endl;
    return 0;
}