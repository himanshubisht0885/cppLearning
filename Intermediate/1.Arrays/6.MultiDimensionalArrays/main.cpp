#include <iostream>
#include <ctime>


int main(){
    //declaring 2d array
    int arr [4] [3] {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };
    std::cout<<"size of arr : "<<sizeof(arr)<<std::endl;
    std::cout<<"elements count in arr : "<<std::size(arr)<<std::endl;
    //reading out elements of array
    for(size_t i{};i<4;++i){
        for (size_t j{}; j<3;++j){
            std::cout<<"value of element at ["<<i<<"]"<<"["<<j<<"] : "<<arr[i][j]<<std::endl;
        }
    }
    //declaring 3d array
    int arr1 [4] [3] [2] {
        {{1,2},{3,4},{5,6}},
        {{7,8},{9,10},{11,12}},
        {{13,14},{15,16},{17,18}},
        {{19,20},{21,22},{23,24}}
    };
    for(size_t i{};i<4;++i){
        for (size_t j{}; j<3;++j){
            for (size_t z {}; z<2;++z)
                std::cout<<"value of element at ["<<i<<"]"<<"["<<j<<"]"<<"["<<z<<"] : "<<arr1[i][j][z]<<std::endl;
        }
    }

    return 0;
}