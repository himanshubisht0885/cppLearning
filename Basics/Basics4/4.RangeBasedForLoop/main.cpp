#include <iostream>


int main(){
    int bag [] {1,2,3,4,5,6,7};
    for (int i : bag){
        std::cout<<"value  :  "<<i<<std::endl;
    }
    return 0;
}