#include <iostream>
#include <cstring>
#include <bits.h>

class myclass {
    public:
    int a {89};
}

int main(){
    const char * p [] {
        "daniel",
        "abc",
        "xyz"
    };
    std::cout<<p<<std::endl;
    std::cout<<*p<<std::endl;
    std::cout<<*p[0]<<std::endl;
    //*p[0]='k'; //compiler error
    //can swap pointers through
    const char *k {"hii"};
    p[0] = k;
    std::cout<<p<<std::endl;
    std::cout<<*p<<std::endl;
    std::cout<<*p[0]<<std::endl;
    const unsigned int a {3};
    const unsigned int b {3};


    return 0;
}