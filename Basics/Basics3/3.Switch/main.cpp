#include <iostream>
#include <iomanip>
#include <bitset>

int main(){
    unsigned short int value;
    std::cout<<"Enter value between 4-6 : "<<std::endl;
    std::cin>>value;
    auto value1 {std::bitset<4>(value)};
    switch (value){
        case 4:{
            std::cout<<std::setw(30)<<std::right<<"value is : "<<
            std::setw(20)<<std::left<<value<<std::endl;
            std::cout<<std::setw(30)<<std::right<<"value in hex is : "<<
            std::setw(20)<<std::left<<std::hex<<value1<<std::endl;
            std::cout<<std::setw(30)<<std::right<<"value in bin is : "<<
            std::setw(20)<<std::left<<value1<<std::endl;
        }
        break;

        case 5:{
            std::cout<<"5"<<std::endl;
            std::cout<<std::setw(30)<<std::right<<"value is : "<<
            std::setw(20)<<std::left<<value<<std::endl;
            std::cout<<std::setw(30)<<std::right<<"value in hex is : "<<
            std::setw(20)<<std::left<<std::hex<<value1<<std::endl;
            std::cout<<std::setw(30)<<std::right<<"value in dec is : "<<
            std::setw(20)<<std::left<<value1<<std::endl;
        }
        break;

        case 6:{
            std::cout<<"6"<<std::endl;
            std::cout<<std::setw(30)<<std::right<<"value is : "<<
            std::setw(20)<<std::left<<value<<std::endl;
            std::cout<<std::setw(30)<<std::right<<"value in hex is : "<<
            std::setw(20)<<std::left<<std::hex<<value1<<std::endl;
            std::cout<<std::setw(30)<<std::right<<"value in bin is : "<<
            std::setw(20)<<std::left<<value1<<std::endl;
        }
        break;
        
        default:{
            std::cout<<"value not in range 4-6"<<std::endl;
        }
        break;
    }
    return 0;
}