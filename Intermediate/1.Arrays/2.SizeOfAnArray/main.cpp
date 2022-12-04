#include <iostream>


int main(){
    //declaring and array
    int arr[] {1,2,3,4,5,6,7,8,9,0};
    std::cout<<"size of array using c++17 : "<<std::size(arr)<<std::endl;
    std::cout<<"size of array  : "<<(sizeof(arr)/sizeof(arr[0]))<<std::endl;
    int m = sizeof(arr)/sizeof(arr[0]);
    //looping in array
    for(size_t i {}; i < sizeof(arr)/sizeof(arr[0]); ++i ){
        std::cout<<"element "<<i<<" of array : "<<arr[i]<<std::endl;
    }
    return 0;
}