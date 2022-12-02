#include <iostream>
#include <iomanip>

int main(){
    const size_t rows {5};
    const size_t columns {7};
    std::cout<<"nested while loop -------"<<std::endl;
    for( size_t i {0}; i < rows; ++i){
        for (size_t j {0}; j < columns; ++j){
            std::cout<<std::setw(10)<<"column : "<<std::setw(5)<<j;
        }
        std::cout<<std::endl;
    }
    size_t x {0};
    size_t y {0};
    std::cout<<"nested while loop -------"<<std::endl;
    while (x<rows){
        while (y<columns)
        {
            std::cout<<std::setw(10)<<"column : "<<std::setw(5)<<y;
            ++y;
        }
        y = 0;
        std::cout<<std::endl;
        ++x;
    }
    std::cout<<"nested while do loop -------"<<std::endl;
    x = 0;
    y = 0;
    do{
        do{
            std::cout<<"(row,column)"<<"("<<x+1<<","<<y+1<<")";
            ++y;
        }while(y<columns);
        std::cout<<std::endl;
        y = 0;
        ++x;
    }while (x<rows);
    
    return 0;
}