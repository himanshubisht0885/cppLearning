#include <iostream>

int main(){
    for (int i {}; i<10;++i){
        std::cout<<"c++"<<std::endl;
    }
    for (size_t i {};i<5;++i){
        std::cout<<"c--"<<std::endl;
    }
    // iterator can live outside the loop scope
    size_t j {};
    for (j;j<4;j++){
        std::cout<<"c+-"<<std::endl;
    }
    return 0;
}