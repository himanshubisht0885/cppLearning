#include <iostream>


int main(){
    //declaring and array
    int num [] {1,2,3,4,5,6,7,8,9,0};
    std::cout<<"nuumber at index 12 : "<<num[12]<<std::endl;
    num [12] = 1000;
    num [132155] = 12342; // comment out it crashes
    std::cout<<"after wiritng data at 12 index "<<std::endl;
    std::cout<<"nuumber at index 12 : "<<num[12]<<std::endl;
    std::cout<<"programm ending ------------ "<<std::endl;
    return 0;
}