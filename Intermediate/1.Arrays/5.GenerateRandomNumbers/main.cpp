#include <iostream>
#include <ctime>


int main(){
    int num = std::rand(); //generates a number between 0 and RAND_MAX
    std::cout<<"number : "<<num<<std::endl;
    int randm = RAND_MAX;
    std::cout<<"RAND_MAX : "<<randm<<std::endl;
    int num2 = std::rand()%11; //between [0-10]
    std::cout<<"number2 : "<<num2<<std::endl;
    for(size_t i {}; i<10; ++i){
        num2 = std::rand()%11; //between [0-10]
        std::cout<<"  |number2 : "<<num2;
    }
    std::cout<<"non repeating random values"<<std::endl;
    std::srand(std::time(0)); //seed
    num2 = std::rand()%11; //between [0-10]
    std::cout<<"number2 : "<<num2<<std::endl;
    for(size_t i {}; i<10; ++i){
        num2 = std::rand()%11; //between [0-10]
        std::cout<<"  |number2 : "<<num2;
    }
    return 0;
}