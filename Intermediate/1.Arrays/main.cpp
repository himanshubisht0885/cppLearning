#include <iostream>


int main(){
    //declaring and array
    int scores[20]; //an array of size 10
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
    std::cout<<sizeof(int)<<std::endl;
    return 0;
}