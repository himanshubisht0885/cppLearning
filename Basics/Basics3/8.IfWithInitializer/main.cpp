#include <iostream>

int main(){
    constexpr bool condition {true};
    if constexpr(unsigned short int speed1 {40u};condition){
        if (speed1>=40){
            std::cout<<"go slow!"<<std::endl;
        }else {
            std::cout<<"under limt"<<std::endl;
        }
    }else{
        std::cout<<"condition is false!"<<std::endl;
    }
    return 0;
}