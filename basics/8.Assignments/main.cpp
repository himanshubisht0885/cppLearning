#include <iostream>

int main(){
    int var1 {123}; //declare and initialize
    std::cout<<"var1 : "<<var1<<std::endl;

    var1 = 55; // assign  
    std::cout<<"var1 : "<<var1<<std::endl;
    std::cout<<"--------------------- "<<std::endl;

    double var2 {44.55};
    std::cout<<"var2 : "<<var2<<std::endl;
    var2 = 99.99;
    std::cout<<"var2 : "<<var2<<std::endl;
    std::cout<<"--------------------- "<<std::endl;

    bool state {true};
    std::cout<<std::boolalpha;
    std::cout<<"state : "<<state<<std::endl;
    state = false;
    std::cout<<"state : "<<state<<std::endl;
    std::cout<<"--------------------- "<<std::endl;

    auto var3 {333u};
    std::cout<<"value of var3 : "<<var3<<std::endl;
    var3 = -55; // assigns garbage value
    std::cout<<"value of var3 : "<<var3<<std::endl;

    return 0;
}