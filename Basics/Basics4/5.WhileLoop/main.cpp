#include <iostream>

int main(){
    const unsigned int count{10};
    unsigned int i {0};
    while (i<count)
    {
        std::cout<<"value : "<<i<<std::endl;
        ++i;
    }
    
    return 0;
}