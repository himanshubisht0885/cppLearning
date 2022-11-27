#include <iostream>

int main(){
    /*
    //variable braced intialization
    int n1;  //garbage value
    int n2 {}; //intializes to zero
    int n3 {3};
    int n4 {5};
    int n5 {n3+n4};
    // int n6 {n7+n8};  //error: 'n8' was not declared in this scope;
    // int n9 {2.9}; //error: narrowing conversion of '2.8999999999999999e+0' from 'double' to 'int'
    std::cout<<"value of n1 is "<<n1<<std::endl;
    std::cout<<"value of n2 is "<<n2<<std::endl;
    std::cout<<"value of n3 is "<<n3<<std::endl;
    std::cout<<"value of n4 is "<<n4<<std::endl;
    std::cout<<"value of n5 is "<<n5<<std::endl;
    //std::cout<<"value of n6 is "<<n6<<std::endl;
    //std::cout<<"value of n9 is "<<n9<<std::endl; 
    */

   /*
    //functional variable intialization
    int n1;  //garbage value
    // int n2 (); //warning: empty parentheses were disambiguated as a function declaration remove parentheses to default-initialize a variable
    int n3 (3);
    int n4 (7);
    int n5 (n3+n4);
    // int n6 (n7+n8);  //error: 'n8' was not declared in this scope;
     int n9 (2.9); //error: narrowing conversion of '2.8999999999999999e+0' from 'double' to 'int'
    std::cout<<"value of n1 is "<<n1<<std::endl;
    //std::cout<<"value of n2 is "<<n2<<std::endl;
    std::cout<<"value of n3 is "<<n3<<std::endl;
    std::cout<<"value of n4 is "<<n4<<std::endl;
    std::cout<<"value of n5 is "<<n5<<std::endl;
    //std::cout<<"value of n6 is "<<n6<<std::endl;
    std::cout<<"value of n9 is "<<n9<<std::endl; // converts to integer {2}
    */

   //assignment initialization
   int n1 = 2;
   int n2 = 7;
   int n3 = n1 + n2;
   int n4;
   int n5 = 2.9;
   std::cout<<"value of n1 is "<<n1<<std::endl;
   std::cout<<"value of n2 is "<<n2<<std::endl;
   std::cout<<"value of n3 is "<<n3<<std::endl;
   std::cout<<"value of n4 is "<<n4<<std::endl;
   std::cout<<"value of n5 is "<<n5<<std::endl; // converts to integer {2}
   std::cout<<"size of int is "<<sizeof(int)<<std::endl; // 4
   std::cout<<"value of n3 is "<<sizeof(n3)<<std::endl;  // 4
    return 0;
}