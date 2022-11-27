#include <iostream>

int main(){

    //Regular Incrementing/Decrement
    int value {5};
    value = value + 1; // increment by one
    std::cout<<"The value is : "<<value<<std::endl;
    value = 5; //reset value to 5
    value = value -1; //decrement by one
    std::cout<<"The value is : "<<value<<std::endl;
    std::cout<<"---------------------------"<<value<<std::endl;
    
    //Postfix Incrementing/Decrement
    value = 5;
    std::cout<<"The value is (incrementing): "<<value++<<std::endl;
    std::cout<<"The value is : "<<value<<std::endl;
    value = 5;
    std::cout<<"The value is (decrementing): "<<value--<<std::endl;
    std::cout<<"The value is : "<<value<<std::endl;

    //Prefix Incrementing/Decrement
    value = 5;
    value++;
    std::cout<<"The value is (prefix): "<<value<<std::endl;
    value = 5;
    std::cout<<"The value is (prefix++ in place): "<<++value<<std::endl;
    value = 5;
    --value; //same as value++
    std::cout<<"The value is (prefix): "<<value<<std::endl;
    value = 5;
    std::cout<<"The value is (prefix-- in place): "<<--value<<std::endl;

    return 0;
}