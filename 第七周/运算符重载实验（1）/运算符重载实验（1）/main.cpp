//
//  main.cpp
//  运算符重载实验（1）
//
//  Created by mac on 16/5/13.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class complex {
public: //外部接口
    complex(double r=0.0,double i=0.0){real=r;imag=i;}
    complex operator + (complex c2); //+重载为成员函数
    complex operator - (complex c2); //-重载为成员函数
    void display( );
private:
    double real;
    double imag;
};
complex complex::operator+(complex c2){
    return complex(real+c2.real,imag+c2.imag);
}
complex complex::operator-(complex c2){
    return complex(real-c2.real,imag-c2.imag);
}
void complex::display(){
    if(imag==0)
        cout<<"Current complex's value is:"<<real<<endl;
    else if(imag>0)
        cout<<"Current complex's value is:"<<real<<"+"<<imag<<"i"<<endl;
    else
        cout<<"Current complex's value is:"<<real<<imag<<"i"<<endl;
}
int main(void){
    complex c1(3,5);
    complex c2(5,-1);
    complex c3=c1+c2;
    c3.display();
    (c1-c2).display();
    return 0;
}