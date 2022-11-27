#include <iostream>

int main(){

    //Addition
    std::cout<<"Addition"<<std::endl;
    int sum1 {3+5};  //8
    int sum2 {8+sum1};//16
    int sum3 {sum1+sum2};//24
    std::cout<<"value of sum1 : "<<sum1<<std::endl;
    std::cout<<"value of sum2 : "<<sum2<<std::endl;
    std::cout<<"value of sum3 : "<<sum3<<std::endl;
    std::cout<<"---------------------"<<std::endl;

    //Subtraction
    std::cout<<"Subtraction"<<std::endl;
    int sub1 {5-3};  //2
    int sub2 {6-sub1};//4
    int sub3 {sub2-sub1};//2
    std::cout<<"value of sub1 : "<<sub1<<std::endl;
    std::cout<<"value of sub2 : "<<sub2<<std::endl;
    std::cout<<"value of sub3 : "<<sub3<<std::endl;
    std::cout<<"---------------------"<<std::endl;

    //Multiplication
    std::cout<<"Multiplication"<<std::endl;
    int m1 {2*3};  //6
    int m2 {4*m1};//24
    int m3 {m1*m2};//144
    std::cout<<"value of m1 : "<<m1<<std::endl;
    std::cout<<"value of m2 : "<<m2<<std::endl;
    std::cout<<"value of m3 : "<<m3<<std::endl;
    std::cout<<"---------------------"<<std::endl;

    //Division
    std::cout<<"Division"<<std::endl;
    int d1 {4};  //4
    int d2 {17};//17
    int d3 {d2/d1};//4
    std::cout<<"value of d1 : "<<d1<<std::endl;
    std::cout<<"value of d2 : "<<d2<<std::endl;
    std::cout<<"value of d3 : "<<d3<<std::endl;
    std::cout<<"---------------------"<<std::endl;

    //Modulus
    std::cout<<"Modulus"<<std::endl;
    int M1 {27};  //27
    int M2 {5};//5
    int M3 {M1%M2};//2
    std::cout<<"value of M1 : "<<M1<<std::endl;
    std::cout<<"value of M2 : "<<M2<<std::endl;
    std::cout<<"value of M3 : "<<M3<<std::endl;
    std::cout<<"---------------------"<<std::endl;
    return 0;
}