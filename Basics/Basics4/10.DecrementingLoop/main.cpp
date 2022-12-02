#include <iostream>

int main(){
    std::cout<<"decrementing for loop ------"<<std::endl;
    for (size_t i {10}; i>0; --i){
        std::cout<<"value of i : "<<i<<std::endl;
    }
    std::cout<<"decrementing while loop ------"<<std::endl;
    size_t j {10};
    while (j>0 ){
        std::cout<<"value of j : "<<j<<std::endl;
        --j;
    }
    std::cout<<"decrementing while do loop ------"<<std::endl;
    size_t k {10};
    do{
        std::cout<<"value of k : "<<k<<std::endl;
        --k;
    }while (k>0);
    return 0;
}