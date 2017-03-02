//
//  main.cpp
//  用成员函数初始化列表初始化数据成员
//
//  Created by mac on 16/3/8.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

class Complex{
private:
    int real,imag;
public:
    Complex(int a,double b):real(a),imag(b){
    }
    ~Complex();
    double abscomplex(){
        double q=real*real+imag*imag;
        return sqrt(q);
    }
    void print(){
        cout<<"Real is:"<<real<<endl;
        cout<<"Imag is:"<<imag<<endl;
    }
};
/*************************************************************/
class Date {
private:
    int year;
    int month;
    int day;
public:
    Date();
    ~Date();
    Date(int y,int m,int d);
    //Date(int y=2015,int m=3,int d=11);
    void ShowDate();
};
Date::Date(){
    year=2015;
    month=3;
    day=10;
}
//在声明定义过无参数的默认构造函数后，不能再定义含有默认参数之的构造函数，否则在声明对象后编译器无法判断构造函数的参数值到底是哪一个，产生二义性

Date::Date(int y,int m,int d):year(y),month(m),day(d){}
void Date::ShowDate(){
    cout<<year<<"-"<<month<<"-"<<day<<endl;
}
/*************************************************************/

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    Complex pointA(3, 4);
    pointA.print();
    cout<<"The distance is:"<<pointA.abscomplex()<<endl;
    Date Time;
    
    Time.ShowDate();
    cout<<endl;
    
    return 0;
}
