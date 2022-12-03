#include <iostream>


int main(){
    //declaring and array
    int scores[5]; //an array of size 10
    //writing data in an array
    scores[0] = 0;
    scores[1] = 10;
    scores[2] = 20;
    scores[3] = 30;//junk data
    //writing out of bounds. BAD!
    scores [22] = 220;
    std::cout<<std::endl;
    std::cout<<"Manually writing data in array : "<<std::endl;
    for(size_t i {}; i<sizeof(scores) ;++i){
        std::cout<<"scores["<<i<<"] :"<<scores[i]<<std::endl;//un initialised array index has junk data
    }
    double salary [5] {12.4,12.5,16.5,20.4,40.5};
    for (double i : salary){
        std::cout<<"salary :"<<i<<std::endl;
    }
    return 0;
}