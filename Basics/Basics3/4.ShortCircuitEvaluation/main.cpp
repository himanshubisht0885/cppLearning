#include <iostream>

bool car1(){
        std::cout<<"car : "<<std::endl;
        return true;
    };
    bool house1(){
        std::cout<<"house : "<<std::endl;
        return false;
    }
    bool pen1(){
        std::cout<<"pen : "<<std::endl;
        return true;
    }
bool car2(){
        std::cout<<"car : "<<std::endl;
        return true;
    };
    bool house2(){
        std::cout<<"house : "<<std::endl;
        return false;
    }
    bool pen2(){
        std::cout<<"pen : "<<std::endl;
        return true;
    }

int main(){
    
    if (car1()&&house1()&&pen1()){
        std::cout<<"all true"<<std::endl;
    }
    else {
        std::cout<<"one of them is false"<<std::endl;
    }
    if (car2()||house2()||pen2()){
        std::cout<<"all true"<<std::endl;
    }
    else {
        std::cout<<"one of them is false"<<std::endl;
    }
    return 0;
}