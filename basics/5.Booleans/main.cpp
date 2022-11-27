#include <iostream>

int main(){
    bool redLight {false};
    bool greenLight {true};
    if (redLight){
        std::cout<<"Stop ! "<<std::endl;
    }
    else{
        std::cout<<"Go Through ! "<<std::endl;
    }
    if (greenLight){
        std::cout<<"The light is Green "<<std::endl;
    }
    else{
        std::cout<<"The light is not Green "<<std::endl;
    }

    std::cout<<"size of bool : "<<sizeof(redLight)<<std::endl;
    std::cout<<"value of redLight is : "<<redLight<<std::endl;
    std::cout<<"value of greenLight is : "<<greenLight<<std::endl;

    // print on true/false
    std::cout<<std::boolalpha;
    std::cout<<"value in true/false"<<std::endl;
    std::cout<<"value of redLight is : "<<redLight<<std::endl;
    std::cout<<"value of greenLight is : "<<greenLight<<std::endl;
    return 0;
}