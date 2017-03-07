//
//  main.cpp
//  运算符重载实验（2）
//
//  Created by mac on 16/5/13.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
class complex
{
public:
    complex(double r=0.0,double i=0.0){
        real=r; imag=i;
    }//构造函数
    friend complex operator + (complex c1,complex c2); //重载运算符+为友元函数
    friend complex operator - (complex c1,complex c2); //重载运算符-为友元函数
    void display(); //显示复数的值
private:
    double real;
    double imag;
};
complex operator+(complex c1,complex c2){
    return complex(c1.real+c2.real,c1.imag+c2.imag);
}
complex operator-(complex c1,complex c2){
    return complex(c1.real-c2.real,c1.imag-c2.imag);
}
void complex::display(){
    if(imag==0)
        cout<<"Current complex's value is:"<<real<<endl;
    else if(imag>0)
        cout<<"Current complex's value is:"<<real<<"+"<<imag<<"i"<<endl;
    else
        cout<<"Current complex's value is:"<<real<<imag<<"i"<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    complex c1(5,3);
    complex c2(1,7);
    complex c3=c1+c2;
    c3.display();
    (c1-c2).display();
    return 0;
}
