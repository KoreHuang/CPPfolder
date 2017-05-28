//
//  main.cpp
//  正方形面积
//
//  Created by mac on 16/4/1.
//  Copyright © 2016年 mac. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
class shape {
private:
    double l;
public:
    shape(double r):l(r){}
    ~shape(){}
    double getArea(){
        return 0.25*l*l*sqrt(25+10*sqrt(5));
    }
    double getPerimeter(){
        return l/(2*sin((36.0/180)*3.1415926));
    }
};
class RPentagon:public shape{
public:
    RPentagon(double x):shape(x){}
    void print(){
        cout<<getArea()<<endl;
        cout<<getPerimeter()<<endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    double l;
    cin>>l;
    RPentagon rpen(l);
    rpen.print();
    return 0;
}
