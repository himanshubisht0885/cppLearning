#include <iostream>
#include <iomanip>
#include <bitset>

int main(){
    constexpr int width1 {10}; 
    constexpr int width2 {40};
    unsigned char char1{0xa}; // 00001010
    unsigned char char2{0xb}; // 00001011
    std::cout<<std::setw(width2)<<std::right<<"value of char 1 (bin) : "<<
    std::setw(width1)<<std::right<<std::bitset<8>(char1)<<std::endl;
    std::cout<<std::setw(width2)<<std::right<<"value of char 2 (bin) : "<<
    std::setw(width1)<<std::right<<std::bitset<8>(char2)<<std::endl;

    //AND & operator
    std::cout<<std::setw(width2)<<std::right<<"value of char 1 & char2 (bin) : "<<
    std::setw(width1)<<std::right<<std::bitset<8>(char1 & char2)<<std::endl; // 00001010

    //OR | operator
    std::cout<<std::setw(width2)<<std::right<<"value of char 1 | char2 (bin) : "<<
    std::setw(width1)<<std::right<<std::bitset<8>(char1 | char2)<<std::endl;

    //XOR ^ operator
    std::cout<<std::setw(width2)<<std::right<<"value of char 1 ^ char2 (bin) : "<<
    std::setw(width1)<<std::right<<std::bitset<8>(char1 ^ char2)<<std::endl;

    //NOT ~ operator
    std::cout<<std::setw(width2)<<std::right<<"value of not char1 (bin) : "<<
    std::setw(width1)<<std::right<<std::bitset<8>(~char1)<<std::endl;
    return 0;
}