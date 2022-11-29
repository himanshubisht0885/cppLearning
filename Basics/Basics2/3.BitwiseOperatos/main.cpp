#include <iostream>
#include <bitset>


int main(){
    unsigned short int data {0b1111011};
    std::cout<<"data : "<<data<<std::endl;
    std::cout<<"data (dec) : "<<std::dec<<data<<std::endl;
    std::cout<<"data (hex) : "<<std::hex<<data<<std::endl;
    std::cout<<"data (oct) : "<<std::oct<<data<<std::endl;
    std::cout<<"data in bin : "<<std::bitset<16>(data)<<std::endl;
    return 0;
}