#include <iostream>

int main(){
    const unsigned int k {100000};
    unsigned int i {0};
    while (i<k)
    {
        //std::cout<<"value of i : "<<i<<std::endl; //comment out std::cot programs runs much faster 
        ++i;
    }
    std::cout<<"done"<<std::endl;
    return 0;
}