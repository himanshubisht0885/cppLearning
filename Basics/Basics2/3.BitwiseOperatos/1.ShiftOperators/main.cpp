#include <iostream>
#include <bitset>

int main(){
    unsigned short int data {0xff12u};
    std::cout<<"data (bin) : "<<std::bitset<16>(data)<<std::endl;
    std::cout<<"shifting right >> "<<std::endl;
    data = static_cast<unsigned short int>(data >> 1);
    std::cout<<"data (bin) : "<<std::bitset<16>(data)<<std::endl;



    return 0;
}