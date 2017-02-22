//
//  main.cpp
//  运算符重载两个复数类操作
//
//  Created by mac on 16/4/17.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class complex{
public:
    double imag,real;
    complex(double i=0,double r=0):real(r),imag(i){}
    ~complex(){};
};
complex operator+(complex a,complex b){
    return complex(a.imag+b.imag,a.real+b.real);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    complex obj1(1.1,1.1);
    complex obj2(2.2,2.2);
    complex obj3;
    obj3=obj1+obj2;
    cout<<"This two complex addly reasult is:"<<obj3.real<<"+"<<obj3.imag<<"i"<<endl;
    
    return 0;
}
