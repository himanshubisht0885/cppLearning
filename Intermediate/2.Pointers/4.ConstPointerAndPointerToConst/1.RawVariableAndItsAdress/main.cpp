#include <iostream>

int main(){
    //raw variable that can be modified
    std::cout<<"raw variable that can be modified --------"<<std::endl;
    std::cout<<"variable that can be modified----"<<std::endl;
    int k {4};
    std::cout<<"value : "<<k<<std::endl;
    std::cout<<"&value : "<<&k<<std::endl;
    k += 6;
    std::cout<<"modifying variable-----"<<std::endl;
    std::cout<<"value : "<<k<<std::endl;
    std::cout<<"&value : "<<&k<<std::endl; //same location

    return 0;
}