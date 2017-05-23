//
//  main.cpp
//  利用友元函数实现运算符重载
//
//  Created by mac on 16/4/17.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
using namespace std;
/****************重载双目运算符**************/
class Complex{
private:
    double imag;
    double real;
public:
    Complex(double r=0,double i=0);
    ~Complex(){}
    friend Complex operator+(Complex &,Complex &);
    friend Complex operator-(Complex &,Complex &);
    friend Complex operator*(Complex &,Complex &);
    friend Complex operator/(Complex &,Complex &);
    void print();
};
Complex::Complex(double r,double i):real(r),imag(i){}
void Complex::print(){
    cout<<"This complex is:"<<real<<"+"<<imag<<"i"<<endl;
}
Complex operator+(Complex &a,Complex &b){
    return Complex(a.real+b.real,a.imag+b.imag);
}
Complex operator-(Complex &a,Complex &b){
    return Complex(a.real-b.real,a.imag-b.imag);
}
Complex operator*(Complex &a,Complex &b){
    return Complex(a.real*b.real-a.imag*b.imag,a.real*b.imag+a.imag*b.real);
}
Complex operator/(Complex &a,Complex &b){
    double t;
    Complex temp;
    t=1/(b.real*b.real+b.imag*b.imag);
    temp.real=t*(a.real*b.real+b.imag*a.imag);
    temp.imag=t*(b.real*a.imag-a.real*b.imag);
    return temp;
}
/*************重载单目运算符**************/
class Coord{
private:
    int x,y;
public:
    Coord(int x1=0,int y1=0):x(x1),y(y1){}
    ~Coord(){}
    friend Coord operator-(Coord &);
    friend Coord operator++(Coord &);
    void print(){
        cout<<"x="<<x<<",y="<<y<<endl;
    }
};
Coord operator-(Coord &b){
    return Coord(-b.x,-b.y);
}
Coord operator++(Coord &b){
    return Coord(++b.x,++b.y);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    Complex A(2.3,4.6),A2(3.6,2.8),A3,A4,A5,A6;
    A3=A+A2;
    A4=A-A2;
    A5=A*A2;
    A6=A/A2;
    A.print();
    A2.print();
    A3.print();
    A4.print();
    A5.print();
    A6.print();
    Coord obj(3,4),nob;
    nob=-obj;
    obj.print();
    nob.print();
    (-obj).print();
    Coord obj1(1,1);
    nob=++obj1;
    nob.print();
    ++obj1;
    obj1.print();
    return 0;
}
