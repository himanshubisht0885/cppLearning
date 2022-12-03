#include <iostream>


int main(){
    double m{5};
    for (auto i : {1,2,3,4,5,6}){
        std::cout<<"result : "<<(i*m)<<std::endl;
    }
    for (auto m{2.5};auto i : {1,2,3,4,5,6}){
        std::cout<<"result : "<<(i*m)<<std::endl;
    }
    return 0;
}