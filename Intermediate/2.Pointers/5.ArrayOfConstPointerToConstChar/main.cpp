#include <iostream>

int main(){
    const char * p [] {
        "daniel",
        "abc",
        "xyz"
    };
    for (const char * k : p ){
        std::cout<<k<<std::endl;
    }
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
    for (const char * k : p ){
        std::cout<<k<<std::endl;
    }


    return 0;
}