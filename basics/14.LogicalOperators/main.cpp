#include <iostream>

int main(){
    bool a {true};
    bool b {false};
    bool c {true};
    std::cout<<std::boolalpha;
    std::cout<<"a : "<<a<<std::endl;
    std::cout<<"b : "<<b<<std::endl;
    std::cout<<"c : "<<c<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Basic AND operations"<<std::endl;
    std::cout<<"a && b : "<<(a && b)<<std::endl;
    std::cout<<"c && b : "<<(c && b)<<std::endl;
    std::cout<<"a && b && c: "<<(a && c && b)<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Basic OR operations"<<std::endl;
    std::cout<<"a || b : "<<(a || b)<<std::endl;
    std::cout<<"c || b : "<<(c || b)<<std::endl;
    std::cout<<"a || b || c: "<<(a || c || b)<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Basic NOT operations"<<std::endl;
    std::cout<<"!a : "<<!a<<std::endl;
    std::cout<<"!b : "<<!b<<std::endl;
    std::cout<<"!c : "<<!c<<std::endl;

    //Relation and logical operators combined
    int d{45};
    int e{30};
    int f{4};
    std::cout<<std::endl;
    std::cout<<"Relational and Logical Operations"<<std::endl;
    std::cout<<"d : "<<d<<std::endl;
    std::cout<<"e : "<<e<<std::endl;
    std::cout<<"f : "<<f<<std::endl;
    std::cout<<std::endl;
    std::cout<<"(d>c)&&(d>f) : "<<((d>c) && (d>f))<<std::endl;
    std::cout<<"(d==c)||(d<f) : "<<((d==c) || (d<f))<<std::endl;
    std::cout<<"(d!=c)||(d<f) : "<<((d!=c) || (d<f))<<std::endl;
    return 0;
}