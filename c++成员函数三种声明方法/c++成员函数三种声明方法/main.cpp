//
//  main.cpp
//  c++成员函数三种声明方法
//
//  Created by mac on 16/3/6.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
class Point{
private:
    int x,y;
public:
    void init(int,int);
    int getx();
    inline int gety();
//成员函数第二种定义方式，在类的内部直接定义,inline可以省略，函数体被隐式声明为內联函数
    inline double Mil(){
        double a,b;
        a=(double)x;
        b=(double)y;
        return sqrt(a*a+b*b);
    }
};
//成员函数第一种定义方式，在类的内部声明，在外部定义
void Point::init(int a, int b){
    x=a;
    y=b;
}
int Point::getx(){
    return x;
}
//成员函数第三种定义方式，在类的内部显示声明为内联函数，在类的外部定义
inline int Point::gety(){
    return y;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Point opa;
    opa.init(4, 3);
    cout<<opa.getx()<<endl<<opa.gety()<<endl;
    cout<<opa.Mil()<<endl;
    std::cout << "Hello, World!\n";
    return 0;
}
