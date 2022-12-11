#include <iostream>

int main(){
    int var1 {5}; //not constant, can change nuber 
    std::cout<<"number var1 : "<<var1<<std::endl;
    std::cout<<"number &var1 : "<<&var1<<std::endl;
    //modify
    var1 = 12;
    var1 += 4;
    std::cout<<"after modifying -------"<<std::endl;
    std::cout<<"number var1 : "<<var1<<std::endl;
    std::cout<<"number &var1 : "<<&var1<<std::endl;
    return 0;
}