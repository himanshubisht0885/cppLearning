#include <iostream>
#include <iomanip> //for precision

int main(){
    double n1{5.6};  
    double n2{};//initializes to 0
    double n3{};//initializes to 0
    std::cout<<"n1/n2 : "<<n1/n2<<std::endl;//inf
    std::cout<<"n2/n3 : "<<n2/n3<<std::endl;//Nam
    float n4{1.12345678901234567890f}; //Precision 7
    double n5{1.12345678901234567890e5}; //Precision 15
    long double n6{1.12345678901234567890e-5L}; //Precision 15+
    std::cout<<" size of n4 : "<<sizeof(n4)<<std::endl;
    std::cout<<" size of n5 : "<<sizeof(n5)<<std::endl;
    std::cout<<" size of n6 : "<<sizeof(n6)<<std::endl;

    // without Precision

    std::cout<<"without precision"<<std::endl;
    std::cout<<"valuf of n4 : "<<n4<<std::endl;
    std::cout<<"valuf of n5 : "<<n5<<std::endl;
    std::cout<<"valuf of n6 : "<<n6<<std::endl;

    // Precision
    std::cout<<std::setprecision(40);//control the precision from std::cout
    std::cout<<"with precision"<<std::endl;
    std::cout<<"valuf of n4 : "<<n4<<std::endl;//7 digits
    std::cout<<"valuf of n5 : "<<n5<<std::endl;//15'ish digits
    std::cout<<"valuf of n6 : "<<n6<<std::endl;//15+digits
    return 0;
}