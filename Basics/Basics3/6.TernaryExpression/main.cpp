#include <iostream>


int main(){
    int max;
    int a {34};
    int b {50};
    max = ( a > b )? a : b ;
    std::cout<<max<<std::endl;
    bool b1 {false};
    max = (b1)? b:a;
    std::cout<<max<<std::endl;
    max = (b1)? b:2.2l;
    std::cout<<max<<std::endl;
    return 0;
}