#include <iostream>


int main(){
    //declaring and array
    char m[] {'h','e','l','l','o'};
    for (auto i : m){
        std::cout<<i<<std::endl;
    }
    std::cout<<m<<std::endl;
    //null termination c-string
    std::cout<<"null ternimated array"<<std::endl;
    char n[] {'h','e','l','l','o','\0'};
    std::cout<<"array n : "<<n<<" size of array n : "<<std::size(n)<<std::endl;
    //string literal
    char m1 [] {"hello"};
    std::cout<<"array m1 : "<<m1<<" size of array m1 : "<<std::size(m1)<<std::endl;
    return 0;
}