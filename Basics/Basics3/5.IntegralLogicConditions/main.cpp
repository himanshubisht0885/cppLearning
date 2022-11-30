#include <iostream>

int main(){
     int k;
    std::cout<<"input value of k : "<<std::endl;
    std::cin>>k;
    bool b1;
    if (k){
        std::cout<<"contains value"<<std::endl;
        b1 = 1;
        std::cout<<b1<<std::boolalpha<<b1<<std::endl;
    }
    else{
        std::cout<<"contains null value"<<std::endl;
        b1 = 0;
        std::cout<<b1<<std::boolalpha<<b1<<std::endl;
    }
    return 0;
}