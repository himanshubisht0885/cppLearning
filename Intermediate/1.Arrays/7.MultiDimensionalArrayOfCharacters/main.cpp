#include <iostream>
#include <ctime>


int main(){
    // mutidimensional array of characters
    const size_t n {5};
    char m [] [n]{
        {'h','e','l','l','o'},
        {'h','i','i'},
        {'a','a','a'}
    };
    //unsafe printing 
    for (size_t i {}; i<sizeof(m)/sizeof(m[0]);++i){
        std::cout<<"value : "<<m[i]<<std::endl;
    }
    //safe printing
    for (size_t i {}; i<sizeof(m)/sizeof(m[0]);++i){
        for (size_t j{}; j< sizeof(m[0])/sizeof(m[0][0]);++j){
            std::cout<<m[i][j];
        }
        std::cout<<std::endl;
    }
    //using c-string ; eliminates unsafe printing ; auto null termination
    char k [] [n+1]{
        "john",
        "hello",
        "hii"
    };
    for(size_t i {}; i<std::size(k); ++i){
        std::cout<<k[i]<<std::endl;
    }
    return 0;
}