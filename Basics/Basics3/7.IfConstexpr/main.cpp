#include <iostream>

int main(){
    constexpr bool condition {false};
    if constexpr(condition){
        std::cout<<"condition is true"<<std::endl;
    }
    else{
        std::cout<<"condition is false"<<std::endl;
    }
    return 0;
}