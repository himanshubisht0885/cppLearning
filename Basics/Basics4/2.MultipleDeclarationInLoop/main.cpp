#include <iostream>
#include <iomanip>
int main(){
    for (size_t i {0},x {5},y {22}; y>15;++i,x+=5,y-=1){
        std::cout<<std::setw(10)<<std::left<<"value of i : "<<std::setw(10)<<std::left<<i<<std::setw(10)<<std::left<<" size of i : "<<std::setw(10)<<std::left<<sizeof(i)<<std::endl;
        std::cout<<std::setw(10)<<std::left<<"value of x : "<<std::setw(10)<<std::left<<x<<std::setw(10)<<std::left<<" size of x : "<<std::setw(10)<<std::left<<sizeof(x)<<std::endl;
        std::cout<<std::setw(10)<<std::left<<"value of y : "<<std::setw(10)<<std::left<<y<<std::setw(10)<<std::left<<" size of y : "<<std::setw(10)<<std::left<<sizeof(y)<<std::endl;
        std::cout<<"--------------------------------------------------------"<<std::endl;
    }
    return 0;
}