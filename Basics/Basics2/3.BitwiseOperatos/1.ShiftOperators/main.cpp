#include <iostream>
#include <bitset>

int main(){
    unsigned short int data {0xff12u};
    std::cout<<"data (bin) : "<<std::bitset<16>(data)<<std::endl;
    std::cout<<"shifting right >> "<<std::endl;
    //right shift by one
    data = static_cast<unsigned short int>(data >> 1);
    std::cout<<"data (bin) : "<<std::bitset<16>(data)<<std::endl;
    std::cout<<"shifting left >> "<<std::endl;
    //left shift by one
    data = static_cast<unsigned short int>(data << 1);
    std::cout<<"data (bin) : "<<std::bitset<16>(data)<<std::endl;
    std::cout<<"shifting right by three>> "<<std::endl;
    //right shift by three
    data = static_cast<unsigned short int>(data >> 3);
    std::cout<<"data (bin) : "<<std::bitset<16>(data)<<std::endl;
    std::cout<<"shifting left by two>> "<<std::endl;
    //left shift by two
    data = static_cast<unsigned short int>(data << 2);
    std::cout<<"data (bin) : "<<std::bitset<16>(data)<<std::endl;
    
    return 0;
}