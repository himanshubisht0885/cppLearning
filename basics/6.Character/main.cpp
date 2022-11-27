#include <iostream>

int main(){
    char char1 = 65; //ascii code for "A"
    std::cout<<"value of char1 : "<<char1<<std::endl;
    std::cout<<"integral value of char1  : "<<static_cast<int>(char1)<<std::endl;

    char char2 {'a'};
    char char3 = 'p'; //" " will cause error
    char char4 ('B');
    std::cout<<char2<<std::endl;
    std::cout<<char3<<std::endl;
    std::cout<<char4<<std::endl;

    // One byte in memory : 2^8 = 256 different values (0 ~ 255)
    std::cout<<std::endl;
    char v1 {65};
    char v2 = 67;
    std::cout<<"value of v1 : "<<v1<<std::endl;
    std::cout<<"integral value of v1  : "<<static_cast<int>(v1)<<std::endl;
    std::cout<<"value of v2 : "<<v2<<std::endl;
    std::cout<<"integral value of v2  : "<<static_cast<int>(v2)<<std::endl;
    return 0;
}