#include <iostream>
#include <iomanip>

void infiloop(){
    char k {'Y'};
    do{
        char k {'Y'};
        int operand1;
        int operand2;
        std::cout<<"Enter value of operand1 : "<<std::endl;
        std::cin>>operand1;
        std::cout<<std::endl;
        std::cout<<"Enter value of operand2 : "<<std::endl;
        std::cin>>operand2;
        std::cout<<std::endl;
        unsigned char operator1;
        std::cout<<"Enter operator +-*/"<<std::endl;
        std::cin>>operator1;
        std::cout<<std::endl;
        switch (operator1){
            case '*':{
                std::cout<<operand1*operand2<<std::endl;
            }
            break;
            case '+':{
                std::cout<<operand1+operand2<<std::endl;
            }
            break;
            case '-':{
                std::cout<<operand1-operand2<<std::endl;
            }
            break;
            case '/':{
                std::cout<<operand1/operand2<<std::endl;
            }
            break;
            default :{
                std::cout<<"enter correct value "<<std::endl;
            }
            break;
        }
        std::cout<<"Press Y to continue : "<<std::endl;
        std::cin>>k;
        unsigned int z = static_cast<int>(k);
    } while(z==89);
}
int main(){
    infiloop();
    return 0;
}