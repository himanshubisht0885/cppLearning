#include <iostream>


int main(){
    int a {5};
    int b {10};
    int c {21};
    int d {3};
    int result = (b*=++a,c-(++a),d+=++a);
    std::cout<<" a : "<<a<<std::endl;
    std::cout<<" b : "<<b<<std::endl;
    std::cout<<" c : "<<c<<std::endl;
    std::cout<<" d : "<<d<<std::endl;
    std::cout<<" result : "<<result<<std::endl;
    return 0;
}