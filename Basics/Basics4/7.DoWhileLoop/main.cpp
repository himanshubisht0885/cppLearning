#include <iostream>

consteval int get_value(){
    return 3;
}
//change count to 0 to see difference 
int main(){
    const unsigned int count{10};
    unsigned int i {0};
    std::cout<<"while loop do-------"<<std::endl;
    do{
        std::cout<<"value of i : "<<i<<std::endl;
        ++i;
    }while (i<count);
    std::cout<<"while loop-------"<<std::endl;
    i = 0;
    while (i<count)
    {
        std::cout<<"value of i : "<<i<<std::endl;
        ++i;
    }
    
    
    return 0;
}